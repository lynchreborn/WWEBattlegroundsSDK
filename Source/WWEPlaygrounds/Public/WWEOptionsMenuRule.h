#pragma once
#include "CoreMinimal.h"
#include "EWWEMatchMenuOptions.h"
#include "WWEOptionsMenuRule.generated.h"

USTRUCT(BlueprintType)
struct FWWEOptionsMenuRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEMatchMenuOptions AffectedOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ForcedOptionIndex;
    
    WWEPLAYGROUNDS_API FWWEOptionsMenuRule();
};

