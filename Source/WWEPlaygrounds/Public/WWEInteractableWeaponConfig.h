#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WWEInteractableWeaponConfig.generated.h"

class AWWEInteractableWeapon;

USTRUCT(BlueprintType)
struct FWWEInteractableWeaponConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpawnLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AWWEInteractableWeapon> InteractableWeaponClass;
    
    WWEPLAYGROUNDS_API FWWEInteractableWeaponConfig();
};

