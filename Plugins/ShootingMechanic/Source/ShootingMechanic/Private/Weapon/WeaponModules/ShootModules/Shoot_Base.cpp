// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/WeaponModules/ShootModules/Shoot_Base.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Weapon/Gun.h"

UShoot_Base::UShoot_Base()
{
	moduleType = WeaponModuleType::Shoot;
	damage = 10;
	accurateRange = 10000;
	maxRange = 10000000;
	roundsPerMinute = 800;
}

void UShoot_Base::OnShoot(AGun* gun)
{
	const auto world = GetWorld();
	if (UKismetSystemLibrary::DoesImplementInterface(UGameplayStatics::GetGameMode(world), UGetShootingSystemGamemode::StaticClass()))
	{
		AShootingSystemGamemode* gamemode = IGetShootingSystemGamemode::Execute_GetShootingSystemGamemode(UGameplayStatics::GetGameMode(world));
		ShootWithGamemode(gun, gamemode);
	}
	else
	{
		ShootWithoutGamemode(gun);
	}
	gun->StartResetShootTimer();
}

UShoot_Base* UShoot_Base::GetShootBaseModule_Implementation()
{
	return this;
}

void UShoot_Base::ShootWithGamemode(AGun* gun, AShootingSystemGamemode* gamemode)
{
	const auto world = GetWorld();
	auto cameraReference = gun->CameraReference();
	if (world != nullptr && cameraReference != nullptr)
	{
		FHitResult hit(ForceInit);
		// Get Bullet Start Point
		FVector start = cameraReference->GetComponentLocation();
		FVector end = FVector::ZeroVector;
		if (gamemode->BulletSpreadEnabled())
			end =  (GetBulletDirection(cameraReference) * maxRange) + start;
		else
			end = (cameraReference->GetForwardVector() * maxRange) + start;
	
	
		const FName traceTag("TraceTag");
		world->DebugDrawTraceTag = traceTag; //Draws arrow at hit point
		FCollisionQueryParams collisionParams;
		collisionParams.TraceTag = traceTag;

		for (auto t : gun->onFireModules)
		{
			if (UKismetSystemLibrary::DoesImplementInterface(t, UGetOnFireBaseModule::StaticClass()))
			{
				IGetOnFireBaseModule::Execute_GetOnFireModule(t)->DoFire(gun, end);
			}
		}

		if (world->LineTraceSingleByChannel(hit, start, end, ECC_Visibility, collisionParams))
		{
			UGameplayStatics::ApplyDamage(hit.GetActor(), damage, gun->GetInstigatorController(), gun, TSubclassOf<UDamageType>(UDamageType::StaticClass()));
			for (auto t : gun->onHitModules)
			{
				if (UKismetSystemLibrary::DoesImplementInterface(t, UGetOnHitBaseModule::StaticClass()))
				{
					IGetOnHitBaseModule::Execute_GetOnHitModule(t)->DoHit(gun,hit);
				}
			}
		}
		
		if (gamemode->ConsumeAmmo())
			gun->ConsumeAmmo();
		if (gamemode->RecoilEnabled())
			gun->AddRecoil();
	}
}

void UShoot_Base::ShootWithoutGamemode(AGun* gun)
{
	const auto world = GetWorld();
	auto cameraReference = gun->CameraReference();
	if (world != nullptr && cameraReference != nullptr)
	{
		FHitResult hit(ForceInit);
		// Get Bullet Start Point
		FVector start = cameraReference->GetComponentLocation();
		FVector end =  (GetBulletDirection(cameraReference) * maxRange) + start;
	
		const FName traceTag("TraceTag");
		world->DebugDrawTraceTag = traceTag; //Draws arrow at hit point
		FCollisionQueryParams collisionParams;
		collisionParams.TraceTag = traceTag;

		for (auto t : gun->onFireModules)
		{
			if (UKismetSystemLibrary::DoesImplementInterface(t, UGetOnFireBaseModule::StaticClass()))
			{
				IGetOnFireBaseModule::Execute_GetOnFireModule(t)->DoFire(gun, end);
			}
		}

		if (world->LineTraceSingleByChannel(hit, start, end, ECC_Visibility, collisionParams))
		{
			UGameplayStatics::ApplyDamage(hit.GetActor(), damage, gun->GetInstigatorController(), gun, TSubclassOf<UDamageType>(UDamageType::StaticClass()));
			for (auto t : gun->onHitModules)
			{
				if (UKismetSystemLibrary::DoesImplementInterface(t, UGetOnHitBaseModule::StaticClass()))
				{
					IGetOnHitBaseModule::Execute_GetOnHitModule(t)->DoHit(gun,hit);
				}
			}
		}
		
		gun->ConsumeAmmo();
		gun->AddRecoil();
	}
}

FVector UShoot_Base::GetBulletDirection(UCameraComponent* cameraReference)
{
	//Calculate Spread 
	FVector2D pointInCircle = FMath::RandPointInCircle(15);
	FVector worldSpacePosition = (pointInCircle.X * cameraReference->GetRightVector()) + (pointInCircle.Y * cameraReference->GetUpVector()) + (accurateRange * cameraReference->GetForwardVector());
	FVector direction = worldSpacePosition - cameraReference->GetComponentLocation();
	direction.Normalize();
	return worldSpacePosition; 
}

void UShoot_Base::ConsumeAmmo()
{
}

void UShoot_Base::AddRecoil()
{
}
