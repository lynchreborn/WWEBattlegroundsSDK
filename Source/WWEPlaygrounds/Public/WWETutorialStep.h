#pragma once
#include "CoreMinimal.h"
#include "EWWETutorialCheck.h"
#include "EWWETutorialStepCompleteExtraCheck.h"
#include "Templates/SubclassOf.h"
#include "WWETutorialStepParamsUI.h"
#include "WWETutorialStep.generated.h"

class UWWEActionNode;

USTRUCT(BlueprintType)
struct WWEPLAYGROUNDS_API FWWETutorialStep {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWWEActionNode> ActionToComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWETutorialStepCompleteExtraCheck ExtraCheckToComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWETutorialCheck CheckToStartStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StopTimeBlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWETutorialStepParamsUI TutorialStepParamsUI;
    
public:
    FWWETutorialStep();
};

