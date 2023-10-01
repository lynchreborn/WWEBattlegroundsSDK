#pragma once
#include "CoreMinimal.h"
#include "EWWEBodyPart.h"
#include "EWWEDirection.h"
#include "EWWEInterestFactor.h"
#include "WWEAnimationVariation.h"
#include "WWEReceiveGroundHitAction.generated.h"

UCLASS(Blueprintable)
class UWWEReceiveGroundHitAction : public UWWEAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEBodyPart BodyPartHarmed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFaceUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHitWhileStandUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEInterestFactor InterestReceive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEDirection DirectionTakingIntoAccountSeenFromAbove;
    
    UWWEReceiveGroundHitAction();
};

