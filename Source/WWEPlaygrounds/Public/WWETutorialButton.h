#pragma once
#include "CoreMinimal.h"
#include "WWETutorialButton.generated.h"

USTRUCT(BlueprintType)
struct WWEPLAYGROUNDS_API FWWETutorialButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActionInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InputText;
    
    FWWETutorialButton();
};

