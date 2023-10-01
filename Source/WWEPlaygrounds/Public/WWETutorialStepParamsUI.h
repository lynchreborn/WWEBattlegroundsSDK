#pragma once
#include "CoreMinimal.h"
#include "WWETutorialInput.h"
#include "WWETutorialStepParamsUI.generated.h"

USTRUCT(BlueprintType)
struct WWEPLAYGROUNDS_API FWWETutorialStepParamsUI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TutorialStepText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWETutorialInput> TutorialStepInputs;
    
    FWWETutorialStepParamsUI();
};

