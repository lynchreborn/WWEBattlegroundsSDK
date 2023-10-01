#pragma once
#include "CoreMinimal.h"
#include "EWWETutorialInputType.h"
#include "WWETutorialButton.h"
#include "WWETutorialInput.generated.h"

USTRUCT(BlueprintType)
struct WWEPLAYGROUNDS_API FWWETutorialInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWETutorialButton> ActionInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWETutorialInputType InputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InputText;
    
    FWWETutorialInput();
};

