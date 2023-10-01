#pragma once
#include "CoreMinimal.h"
#include "EWWEDirection.h"
#include "EWWEInterestFactor.h"
#include "WWEAnimationVariation.h"
#include "WWEIrishWhipAction.generated.h"

UCLASS(Blueprintable)
class UWWEIrishWhipAction : public UWWEAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEDirection DirectionToPush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEInterestFactor InterestDone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEInterestFactor InterestReceive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bWasCountered: 1;
    
    UWWEIrishWhipAction();
};

