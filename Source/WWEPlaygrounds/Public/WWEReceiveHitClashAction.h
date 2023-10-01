#pragma once
#include "CoreMinimal.h"
#include "WWEDistanceAnimationVariation.h"
#include "WWEReceiveHitClashAction.generated.h"

UCLASS(Blueprintable)
class UWWEReceiveHitClashAction : public UWWEDistanceAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFaceToWall;
    
    UWWEReceiveHitClashAction();
};

