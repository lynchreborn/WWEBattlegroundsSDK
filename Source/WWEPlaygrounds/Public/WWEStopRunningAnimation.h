#pragma once
#include "CoreMinimal.h"
#include "WWEAnimationVariation.h"
#include "WWEStopRunningAnimation.generated.h"

UCLASS(Blueprintable)
class UWWEStopRunningAnimation : public UWWEAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFall;
    
    UWWEStopRunningAnimation();
};

