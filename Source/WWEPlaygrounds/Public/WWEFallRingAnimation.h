#pragma once
#include "CoreMinimal.h"
#include "WWEAnimationVariation.h"
#include "WWEFallRingAnimation.generated.h"

UCLASS(Blueprintable)
class UWWEFallRingAnimation : public UWWEAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsToOutside;
    
    UWWEFallRingAnimation();
};

