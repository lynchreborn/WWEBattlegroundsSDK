#pragma once
#include "CoreMinimal.h"
#include "WWEPowerUpItemEntry.generated.h"

class UWWEPowerUpBase;

USTRUCT(BlueprintType)
struct FWWEPowerUpItemEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UWWEPowerUpBase> PowerUpItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CachedPowerUpItemID;
    
    WWEPLAYGROUNDS_API FWWEPowerUpItemEntry();
};

