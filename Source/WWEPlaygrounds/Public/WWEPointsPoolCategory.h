#pragma once
#include "CoreMinimal.h"
#include "WWECategoryCurrentState.h"
#include "WWEPointsPoolType.h"
#include "WWEPointsPoolCategory.generated.h"

USTRUCT(BlueprintType)
struct FWWEPointsPoolCategory {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWEPointsPoolType TotalPointsPools[10];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWECategoryCurrentState CategoryCurrentState[66];
    
    WWEPLAYGROUNDS_API FWWEPointsPoolCategory();
};

