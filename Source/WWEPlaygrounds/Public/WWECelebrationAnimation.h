#pragma once
#include "CoreMinimal.h"
#include "EWWEInterestFactor.h"
#include "WWEAnimationVariation.h"
#include "WWECelebrationAnimation.generated.h"

UCLASS(Blueprintable)
class UWWECelebrationAnimation : public UWWEAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Winner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEInterestFactor InterestDone;
    
    UWWECelebrationAnimation();
};

