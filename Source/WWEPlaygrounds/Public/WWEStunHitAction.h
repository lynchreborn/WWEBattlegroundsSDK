#pragma once
#include "CoreMinimal.h"
#include "EWWEInterestFactor.h"
#include "WWEAnimationVariation.h"
#include "WWEStunHitAction.generated.h"

UCLASS(Blueprintable)
class UWWEStunHitAction : public UWWEAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEInterestFactor InterestDone;
    
    UWWEStunHitAction();
};

