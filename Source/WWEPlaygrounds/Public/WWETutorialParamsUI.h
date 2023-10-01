#pragma once
#include "CoreMinimal.h"
#include "WWETutorialParamsUI.generated.h"

USTRUCT(BlueprintType)
struct WWEPLAYGROUNDS_API FWWETutorialParamsUI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TutorialName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> InitialTexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> FinalTexts;
    
    FWWETutorialParamsUI();
};

