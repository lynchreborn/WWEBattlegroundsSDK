#pragma once
#include "CoreMinimal.h"
#include "WWEDistanceAnimationVariation.h"
#include "WWEGrabTurnbuckleAction.generated.h"

UCLASS(Blueprintable)
class UWWEGrabTurnbuckleAction : public UWWEDistanceAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFatality;
    
    UWWEGrabTurnbuckleAction();
};

