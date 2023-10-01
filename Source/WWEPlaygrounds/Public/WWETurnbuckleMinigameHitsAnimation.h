#pragma once
#include "CoreMinimal.h"
#include "WWEDistanceAnimationVariation.h"
#include "WWETurnbuckleMinigameHitsAnimation.generated.h"

UCLASS(Blueprintable)
class UWWETurnbuckleMinigameHitsAnimation : public UWWEDistanceAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SizeType;
    
    UWWETurnbuckleMinigameHitsAnimation();
};

