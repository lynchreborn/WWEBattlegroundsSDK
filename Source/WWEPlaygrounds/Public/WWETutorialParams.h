#pragma once
#include "CoreMinimal.h"
#include "WWETutorialParamsUI.h"
#include "WWETutorialStep.h"
#include "WWETutorialParams.generated.h"

USTRUCT(BlueprintType)
struct WWEPLAYGROUNDS_API FWWETutorialParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TutorialOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWETutorialStep> TutorialSteps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWETutorialParamsUI TutorialParamsUI;
    
    FWWETutorialParams();
};

