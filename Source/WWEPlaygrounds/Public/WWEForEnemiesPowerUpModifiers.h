#pragma once
#include "CoreMinimal.h"
#include "WWEForEnemiesPowerUpModifiers.generated.h"

USTRUCT(BlueprintType)
struct FWWEForEnemiesPowerUpModifiers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float ReducedSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float IncreasePinInputsModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bIncapacitateUsePowerUps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bImpossibleToDoCounterModifier;
    
    WWEPLAYGROUNDS_API FWWEForEnemiesPowerUpModifiers();
};

