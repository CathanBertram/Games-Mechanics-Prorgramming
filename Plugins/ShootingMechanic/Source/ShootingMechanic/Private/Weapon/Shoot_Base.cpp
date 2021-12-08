// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/Shoot_Base.h"

#include "Interfaces/GetShootingSystemGamemode.h"
#include "Kismet/GameplayStatics.h"

UShoot_Base::UShoot_Base()
{
}

UShoot_Base::~UShoot_Base()
{
}

void UShoot_Base::OnShoot(UWorld* world, AGun* gun)
{
	if (UKismetSystemLibrary::DoesImplementInterface(UGameplayStatics::GetGameMode(world), UGetShootingSystemGamemode::StaticClass()))
	{
		AShootingSystemGamemode* gamemode = IGetShootingSystemGamemode::Execute_GetShootingSystemGamemode(UGameplayStatics::GetGameMode(world));
		ShootWithGamemode(gun, world, gamemode);
	}
	else
	{
		ShootWithoutGamemode(gun, world);
	}
}

void UShoot_Base::ShootWithGamemode(AGun* gun, UWorld* world, AShootingSystemGamemode* gamemode)
{
	auto cameraReference = gun->CameraReference();
	if (world != nullptr && cameraReference != nullptr)
	{
		for (int i = 0; i < gun->ProjectileCount(); ++i)
		{
			FHitResult hit(ForceInit);
			// Get Bullet Start Point
			FVector start = cameraReference->GetComponentLocation();
			FVector end = FVector::ZeroVector;
			if (gamemode->BulletSpreadEnabled())
				end =  (GetBulletDirection(cameraReference, gun->AccurateRange()) * gun->MaxRange()) + start;
			else
				end = (cameraReference->GetForwardVector() * gun->MaxRange()) + start;
		
		
			const FName traceTag("TraceTag");
			world->DebugDrawTraceTag = traceTag; //Draws arrow at hit point
			FCollisionQueryParams collisionParams;
			collisionParams.TraceTag = traceTag;
	
			if (world->LineTraceSingleByChannel(hit, start, end, ECC_Visibility, collisionParams))
			{
				UGameplayStatics::ApplyDamage(hit.GetActor(), gun->Damage(), gun->GetInstigatorController(), gun, TSubclassOf<UDamageType>(UDamageType::StaticClass()));
			}
		}
		if (gamemode->ConsumeAmmo())
			gun->ConsumeAmmo();
		if (gamemode->RecoilEnabled())
			gun->AddRecoil();
		
	}
	
}

void UShoot_Base::ShootWithoutGamemode(AGun* gun, UWorld* world)
{
	auto cameraReference = gun->CameraReference();
	if (world != nullptr && cameraReference != nullptr)
	{
		for (int i = 0; i < gun->ProjectileCount(); ++i)
		{
			FHitResult hit(ForceInit);
			// Get Bullet Start Point
			FVector start = cameraReference->GetComponentLocation();
			FVector end =  (GetBulletDirection(cameraReference, gun->AccurateRange()) * gun->MaxRange()) + start;
		
			const FName traceTag("TraceTag");
			world->DebugDrawTraceTag = traceTag; //Draws arrow at hit point
			FCollisionQueryParams collisionParams;
			collisionParams.TraceTag = traceTag;
	
			if (world->LineTraceSingleByChannel(hit, start, end, ECC_Visibility, collisionParams))
			{
				UGameplayStatics::ApplyDamage(hit.GetActor(), gun->Damage(), gun->GetInstigatorController(), gun, TSubclassOf<UDamageType>(UDamageType::StaticClass()));
			}
		}
		gun->ConsumeAmmo();
		gun->AddRecoil();
	}
}

FVector UShoot_Base::GetBulletDirection(UCameraComponent* cameraReference, float accurateRange)
{
	//Calculate Spread 
	FVector2D pointInCircle = FMath::RandPointInCircle(15);
	FVector worldSpacePosition = (pointInCircle.X * cameraReference->GetRightVector()) + (pointInCircle.Y * cameraReference->GetUpVector()) + (accurateRange * cameraReference->GetForwardVector());
	FVector direction = worldSpacePosition - cameraReference->GetComponentLocation();
	direction.Normalize();
	return worldSpacePosition; 
}
