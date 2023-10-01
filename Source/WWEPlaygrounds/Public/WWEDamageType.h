#pragma once
#include "CoreMinimal.h"
#include "EWWEHitStrength.h"
#include "EWWEHitWeaponMaterial.h"
#include "WWEDamageType.generated.h"

USTRUCT(BlueprintType)
struct FWWEDamageType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EWWEHitStrength HitStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EWWEHitWeaponMaterial HitWeaponMaterial;
    
    WWEPLAYGROUNDS_API FWWEDamageType();
};

