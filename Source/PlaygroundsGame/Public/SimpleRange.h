#pragma once
#include "CoreMinimal.h"
#include "SimpleRange.generated.h"

USTRUCT(BlueprintType)
struct FSimpleRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LowerBound;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UpperBound;
    
    PLAYGROUNDSGAME_API FSimpleRange();
};

