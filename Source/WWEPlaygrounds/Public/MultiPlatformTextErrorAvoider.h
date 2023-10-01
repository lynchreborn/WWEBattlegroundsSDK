#pragma once
#include "CoreMinimal.h"
#include "MultiPlatformTextErrorAvoider.generated.h"

USTRUCT(BlueprintType)
struct FMultiPlatformTextErrorAvoider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> Array;
    
    WWEPLAYGROUNDS_API FMultiPlatformTextErrorAvoider();
};

