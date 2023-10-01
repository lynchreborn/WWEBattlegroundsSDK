#pragma once
#include "CoreMinimal.h"
#include "EWWEInterestFactor.h"
#include "EWWERunningHitType.h"
#include "WWEDistanceAnimationVariation.h"
#include "WWERunningHitAction.generated.h"

UCLASS(Blueprintable)
class UWWERunningHitAction : public UWWEDistanceAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWERunningHitType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEInterestFactor InterestDone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEInterestFactor InterestReceive;
    
    UWWERunningHitAction();
};

