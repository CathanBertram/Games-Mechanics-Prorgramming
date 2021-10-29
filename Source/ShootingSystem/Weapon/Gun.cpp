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
}

void AGun::FireStart_Implementation()
{
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
}

void AGun::FireRelease_Implementation()
{
}

void AGun::Equip_Implementation(UCameraComponent* camera)
{
	cameraReference = camera;
}

void AGun::Unequip_Implementation()
{
	cameraReference = nullptr;
}

// Called when the game starts or when spawned
void AGun::BeginPlay()
{
	Super::BeginPlay();
}

void AGun::AddRecoil()
{
	
}


