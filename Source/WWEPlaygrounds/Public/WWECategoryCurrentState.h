#pragma once
#include "CoreMinimal.h"
#include "WWECategoryCurrentState.generated.h"

USTRUCT(BlueprintType)
struct FWWECategoryCurrentState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentEarnedPoints;
    
    WWEPLAYGROUNDS_API FWWECategoryCurrentState();
};

