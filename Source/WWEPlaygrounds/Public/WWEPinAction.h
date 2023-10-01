#pragma once
#include "CoreMinimal.h"
#include "EWWEDirection.h"
#include "EWWEInterestFactor.h"
#include "WWEAnimationVariation.h"
#include "WWEPinAction.generated.h"

UCLASS(Blueprintable)
class UWWEPinAction : public UWWEAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEDirection DirectionTakingIntoAccountCharacterDumped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFaceUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWithPowerUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEInterestFactor InterestDone;
    
    UWWEPinAction();
};

