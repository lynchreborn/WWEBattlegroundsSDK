#pragma once
#include "CoreMinimal.h"
#include "WWEAnimationVariation.h"
#include "WWEClimbElectrocutedAction.generated.h"

UCLASS(Blueprintable)
class UWWEClimbElectrocutedAction : public UWWEAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGrabbingMinigame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReceivingMinigame;
    
    UWWEClimbElectrocutedAction();
};

