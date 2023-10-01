#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "WWEWeaponCollisionSound.generated.h"

class USoundCue;

USTRUCT(BlueprintType)
struct FWWEWeaponCollisionSound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPhysicalSurface> Surface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* CollisionSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinVolumeMultiplier;
    
    WWEPLAYGROUNDS_API FWWEWeaponCollisionSound();
};

