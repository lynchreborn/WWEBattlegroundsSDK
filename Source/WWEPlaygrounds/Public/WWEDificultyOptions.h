#pragma once
#include "CoreMinimal.h"
#include "WWEDifficultyOption.h"
#include "WWEDificultyOptions.generated.h"

USTRUCT(BlueprintType)
struct FWWEDificultyOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEDifficultyOption> Options;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultOptionIndex;
    
    WWEPLAYGROUNDS_API FWWEDificultyOptions();
};

