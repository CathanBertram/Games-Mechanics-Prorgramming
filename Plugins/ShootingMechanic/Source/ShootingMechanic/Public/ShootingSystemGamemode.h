#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ShootingMechanic/Public/Interfaces/GetShootingSystemGamemode.h"


#include "ShootingSystemGamemode.generated.h"

UCLASS()
class SHOOTINGMECHANIC_API AShootingSystemGamemode : public AGameModeBase, public IGetShootingSystemGamemode
{
	GENERATED_BODY()

protected:
	bool infiniteAmmo = false;
	bool consumeAmmo = true;
	bool bulletSpread = true;
	bool recoil = true;
	
public:
	bool InfiniteAmmo() {return infiniteAmmo;}
	bool ConsumeAmmo() {return consumeAmmo;}
	bool BulletSpreadEnabled() {return bulletSpread;}
	bool RecoilEnabled() {return recoil;}

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	AShootingSystemGamemode* GetShootingSystemGamemode();
	virtual AShootingSystemGamemode* GetShootingSystemGamemode_Implementation() override;
};
