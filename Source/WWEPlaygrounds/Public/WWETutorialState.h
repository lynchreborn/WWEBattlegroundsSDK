#pragma once
#include "CoreMinimal.h"
#include "WWETutorialParamsUI.h"
#include "WWETutorialStep.h"
#include "WWETutorialState.generated.h"

USTRUCT(BlueprintType)
struct WWEPLAYGROUNDS_API FWWETutorialState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    int32 TutorialIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bIsCurrentStepActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWWETutorialStep> TutorialSteps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FWWETutorialParamsUI TutorialParamsUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bCurrentMessageBoxActive;
    
public:
    FWWETutorialState();
};

