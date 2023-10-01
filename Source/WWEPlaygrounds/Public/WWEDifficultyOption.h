#pragma once
#include "CoreMinimal.h"
#include "EPGMatchDifficultyConfigs.h"
#include "WWEDifficultyOption.generated.h"

USTRUCT(BlueprintType)
struct FWWEDifficultyOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OptionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPGMatchDifficultyConfigs DifficultyKey;
    
    WWEPLAYGROUNDS_API FWWEDifficultyOption();
};

