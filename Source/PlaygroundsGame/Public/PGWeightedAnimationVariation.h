#pragma once
#include "CoreMinimal.h"
#include "PGAnimationVariation.h"
#include "PGWeightedAnimationVariation.generated.h"

USTRUCT(BlueprintType)
struct FPGWeightedAnimationVariation : public FPGAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Weight;
    
    PLAYGROUNDSGAME_API FPGWeightedAnimationVariation();
};

