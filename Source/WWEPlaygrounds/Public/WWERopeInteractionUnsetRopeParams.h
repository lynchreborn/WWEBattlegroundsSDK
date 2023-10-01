#pragma once
#include "CoreMinimal.h"
#include "WWERopeInteractionUnsetRopeParams.generated.h"

USTRUCT(BlueprintType)
struct FWWERopeInteractionUnsetRopeParams {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetCurve;
    
public:
    WWEPLAYGROUNDS_API FWWERopeInteractionUnsetRopeParams();
};

