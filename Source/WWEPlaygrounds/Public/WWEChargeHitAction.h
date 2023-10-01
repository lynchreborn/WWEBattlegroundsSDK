#pragma once
#include "CoreMinimal.h"
#include "EWWEInterestFactor.h"
#include "WWEDistanceAnimationVariation.h"
#include "WWEChargeHitAction.generated.h"

class UWWEAnimationVariation;

UCLASS(Blueprintable)
class UWWEChargeHitAction : public UWWEDistanceAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRivalDumped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWWEAnimationVariation* FastAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEInterestFactor InterestDone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEInterestFactor InterestReceive;
    
    UWWEChargeHitAction();
};

