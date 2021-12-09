// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootingMechanic/Public/Weapon/Gun.h"

#include "ShootingSystemGamemode.h"
#include "Kismet/GameplayStatics.h"
#include "ShootingMechanic/Public/Interfaces/GetShootingSystemGamemode.h"

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
	projectileCount = 1;
}

AGun::~AGun()
{
	OnShoot.Clear();
}

// Called when the game starts or when spawned
void AGun::BeginPlay()
{
	Super::BeginPlay();
	curAmmo = maxAmmoInMag;
	curTotalAmmo = totalAmmoCapacity;
}

void AGun::FireRelease_Implementation()
{
}

void AGun::FireStart_Implementation()
{
	Shoot();
}

void AGun::Reload_Implementation()
{
	if (curTotalAmmo > maxAmmoInMag)
	{
		int usedAmmo = maxAmmoInMag - curAmmo;
		curAmmo = maxAmmoInMag;

		if (UKismetSystemLibrary::DoesImplementInterface(UGameplayStatics::GetGameMode(GetWorld()), UGetShootingSystemGamemode::StaticClass()))
		{
			if(IGetShootingSystemGamemode::Execute_GetShootingSystemGamemode(UGameplayStatics::GetGameMode(GetWorld()))->InfiniteAmmo())
				return;
		}
		curTotalAmmo -= usedAmmo;
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

void AGun::ResetCanShoot()
{
	canShoot = true;
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

void AGun::StartResetShootTimer(float cooldown)
{
	if (cooldown <= 0)
		GetWorldTimerManager().SetTimer(resetShootTimer, this, &AGun::ResetCanShoot, TimeBetweenShots());
	else
		GetWorldTimerManager().SetTimer(resetShootTimer, this, &AGun::ResetCanShoot, cooldown);
}

void AGun::Shoot()
{
	if(!canShoot || !CheckAmmo()) return;

	canShoot = false;
	shootType->OnShoot(this);
	
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, FString::Printf(TEXT("CurAmmo: %d"), curAmmo));
}

float AGun::TimeBetweenShots()
{
	return 60 / roundsPerMinute;
}


