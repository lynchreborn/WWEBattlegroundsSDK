#pragma once
#include "CoreMinimal.h"
#include "EWWENumberOfWeapons.h"
#include "WWEBaseMatchConfig.generated.h"

USTRUCT(BlueprintType)
struct FWWEBaseMatchConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWENumberOfWeapons RingWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWENumberOfWeapons SpectatorWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInteractiveMapItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPowerUps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DestructibleRing;
    
    WWEPLAYGROUNDS_API FWWEBaseMatchConfig();
};

