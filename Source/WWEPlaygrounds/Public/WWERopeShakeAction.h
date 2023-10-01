#pragma once
#include "CoreMinimal.h"
#include "WWEDistanceAnimationVariation.h"
#include "WWERopeShakeAction.generated.h"

UCLASS(Blueprintable)
class UWWERopeShakeAction : public UWWEDistanceAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFaceRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTowardOutApronPositionLeft;
    
    UWWERopeShakeAction();
};

