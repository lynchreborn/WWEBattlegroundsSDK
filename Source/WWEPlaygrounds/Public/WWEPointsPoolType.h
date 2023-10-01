#pragma once
#include "CoreMinimal.h"
#include "WWEPointsPoolType.generated.h"

USTRUCT(BlueprintType)
struct FWWEPointsPoolType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentPoints;
    
    WWEPLAYGROUNDS_API FWWEPointsPoolType();
};

