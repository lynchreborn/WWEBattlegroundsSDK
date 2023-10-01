#pragma once
#include "CoreMinimal.h"
#include "EWWEInterestFactor.h"
#include "WWEDistanceAnimationVariation.h"
#include "WWERunningThrowsAction.generated.h"

UCLASS(Blueprintable)
class UWWERunningThrowsAction : public UWWEDistanceAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEInterestFactor InterestDone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEInterestFactor InterestReceive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBackThrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bToTurnbuckle;
    
    UWWERunningThrowsAction();
};

