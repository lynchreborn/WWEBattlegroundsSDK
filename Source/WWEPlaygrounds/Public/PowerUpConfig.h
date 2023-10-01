#pragma once
#include "CoreMinimal.h"
#include "EWWEPowerUpLevels.h"
#include "Templates/SubclassOf.h"
#include "PowerUpConfig.generated.h"

class UWWEPowerUpBase;

USTRUCT(BlueprintType)
struct FPowerUpConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWWEPowerUpBase> PowerUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEPowerUpLevels Level;
    
    WWEPLAYGROUNDS_API FPowerUpConfig();
};

