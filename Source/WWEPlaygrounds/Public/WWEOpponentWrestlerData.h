#pragma once
#include "CoreMinimal.h"
#include "PowerUpConfig.h"
#include "Templates/SubclassOf.h"
#include "WWEOpponentWrestlerData.generated.h"

class UPGCharacterParameters;

USTRUCT(BlueprintType)
struct FWWEOpponentWrestlerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPGCharacterParameters> CharacterParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCustomOverall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NewCustomOverall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPowerUpConfig> NewPowerUps;
    
    WWEPLAYGROUNDS_API FWWEOpponentWrestlerData();
};

