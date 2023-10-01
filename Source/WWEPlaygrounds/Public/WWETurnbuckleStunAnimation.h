#pragma once
#include "CoreMinimal.h"
#include "WWEDistanceAnimationVariation.h"
#include "WWETurnbuckleStunAnimation.generated.h"

UCLASS(Blueprintable)
class UWWETurnbuckleStunAnimation : public UWWEDistanceAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFront;
    
    UWWETurnbuckleStunAnimation();
};

