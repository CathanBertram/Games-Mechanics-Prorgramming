// Fill out your copyright notice in the Description page of Project Settings.


#include "Gun.h"


#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AGun::AGun()
{
	root = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneComponent"));
	RootComponent = root;

	gunMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("GunMesh"));
	gunMesh->SetupAttachment(root);

	gunMuzzle = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzlePosition"));
	gunMuzzle->SetupAttachment(gunMesh);

	canShoot = true;
	damage = 10;
	accurateRange = 10000;
	maxRange = 10000000;
	roundsPerMinute = 800;
	maxAmmoInMag = 30;
	curAmmo = maxAmmoInMag;
	totalAmmoCapacity = 120;
	curTotalAmmo = totalAmmoCapacity;
}

AGun::~AGun()
{
	OnShoot.Clear();
}

void AGun::FireStart_Implementation()
{
	Shoot();
}

void AGun::FireRelease_Implementation()
{
}

void AGun::Reload_Implementation()
{
	if (curTotalAmmo > maxAmmoInMag)
	{
		curAmmo = maxAmmoInMag;
		curTotalAmmo -= maxAmmoInMag;
		return;
	}

	curAmmo = curTotalAmmo;
	curTotalAmmo = 0;
}

void AGun::Equip_Implementation(UCameraComponent* camera)
{
	cameraReference = camera;
}

void AGun::Unequip_Implementation()
{
	cameraReference = nullptr;
}

AGun* AGun::GetGun_Implementation()
{
	return this;
}

// Called when the game starts or when spawned
void AGun::BeginPlay()
{
	Super::BeginPlay();
	curAmmo = maxAmmoInMag;
	curTotalAmmo = totalAmmoCapacity;
}

void AGun::ResetCanShoot()
{
	canShoot = true;
}

FVector AGun::GetBulletDirection()
{
	//Calculate Spread 
	FVector2D pointInCircle = FMath::RandPointInCircle(15);
	FVector worldSpacePosition = (pointInCircle.X * cameraReference->GetRightVector()) + (pointInCircle.Y * cameraReference->GetUpVector()) + (accurateRange * cameraReference->GetForwardVector());
	FVector direction = worldSpacePosition - cameraReference->GetComponentLocation();
	direction.Normalize();
	return worldSpacePosition; 
}

void AGun::AddRecoil()
{
	if (recoilPattern == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 3, FColor::Red, TEXT("Weapon Has No Assigned Recoil Pattern"));
		return;
	}

	OnShoot.Broadcast(recoilPattern->GetRecoilAtIndex(recoilIndex));
	recoilIndex++;
	GetWorldTimerManager().SetTimer(resetRecoilTimer, this, &AGun::ResetRecoil, TimeBetweenShots());
}

void AGun::ResetRecoil()
{
	recoilIndex = 0;
}

void AGun::Shoot()
{
	if(!canShoot || !CheckAmmo()) return;
	
	const auto world = GetWorld();
	if (world != nullptr && cameraReference != nullptr)
	{
		FHitResult hit(ForceInit);
		// Get Bullet Start Point
		FVector start = cameraReference->GetComponentLocation();
		FVector end =  (GetBulletDirection() * maxRange) + start;
		
		const FName traceTag("TraceTag");
		world->DebugDrawTraceTag = traceTag; //Draws arrow at hit point
		FCollisionQueryParams collisionParams;
		collisionParams.TraceTag = traceTag;
	
		if (world->LineTraceSingleByChannel(hit, start, end, ECC_Visibility, collisionParams))
		{
			UGameplayStatics::ApplyDamage(hit.GetActor(), damage, this->GetInstigatorController(), this, TSubclassOf<UDamageType>(UDamageType::StaticClass()));
		}
		
		AddRecoil();
	}
	
	curAmmo--;
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, FString::Printf(TEXT("CurAmmo: %d"), curAmmo));

	GetWorldTimerManager().SetTimer(resetShootTimer, this, &AGun::ResetCanShoot, TimeBetweenShots());
}

float AGun::TimeBetweenShots()
{
	return 60 / roundsPerMinute;
}


