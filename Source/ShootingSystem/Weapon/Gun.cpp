// Fill out your copyright notice in the Description page of Project Settings.


#include "Gun.h"


#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "ShootingSystem/Interfaces/Interactable.h"

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
	range = 10000;
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

void AGun::AddRecoil()
{
	OnShoot.Broadcast(FMath::RandRange(-.25f,-.60f), FMath::RandRange(-.5f,.5f));
}

void AGun::Shoot()
{
	if(!canShoot || !CheckAmmo()) return;
	
	const auto world = GetWorld();
	if (world != nullptr && cameraReference != nullptr)
	{
		FHitResult hit(ForceInit);
		
		auto start = cameraReference->GetComponentLocation();
		auto forward = cameraReference->GetForwardVector();
		auto end = (forward * 100000) + start; 
	
		const FName traceTag("TraceTag");
		world->DebugDrawTraceTag = traceTag; //Draws arrow at hit point
		FCollisionQueryParams collisionParams;
		collisionParams.TraceTag = traceTag;
	
		if (world->LineTraceSingleByChannel(hit, start,end, ECC_Visibility, collisionParams))
		{
			UGameplayStatics::ApplyDamage(hit.GetActor(), damage, this->GetInstigatorController(), this, TSubclassOf<UDamageType>(UDamageType::StaticClass()));
		}
		
		AddRecoil();
	}
	
	curAmmo--;
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, FString::Printf(TEXT("CurAmmo: %d"), curAmmo));

	GetWorldTimerManager().SetTimer(resetShootTimer, this, &AGun::ResetCanShoot, 1 / roundsPerMinute);
}


