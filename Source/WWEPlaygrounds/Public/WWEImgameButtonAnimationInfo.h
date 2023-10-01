#pragma once
#include "CoreMinimal.h"
#include "WWEImgameButtonFrameAnimationInfo.h"
#include "WWEImgameButtonAnimationInfo.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FWWEImgameButtonAnimationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEImgameButtonFrameAnimationInfo> Frames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ScaleCurve;
    
    WWEPLAYGROUNDS_API FWWEImgameButtonAnimationInfo();
};

