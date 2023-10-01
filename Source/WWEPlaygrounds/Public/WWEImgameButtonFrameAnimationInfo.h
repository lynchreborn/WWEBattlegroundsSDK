#pragma once
#include "CoreMinimal.h"
#include "WWEImgameButtonFrameAnimationInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FWWEImgameButtonFrameAnimationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrameTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Frame;
    
    WWEPLAYGROUNDS_API FWWEImgameButtonFrameAnimationInfo();
};

