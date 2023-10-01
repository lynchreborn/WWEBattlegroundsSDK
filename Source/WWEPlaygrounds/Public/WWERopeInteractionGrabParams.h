#pragma once
#include "CoreMinimal.h"
#include "WWERopeInteractionGrabParams.generated.h"

USTRUCT(BlueprintType)
struct FWWERopeInteractionGrabParams {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrabInterpolationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Threshold;
    
public:
    WWEPLAYGROUNDS_API FWWERopeInteractionGrabParams();
};

