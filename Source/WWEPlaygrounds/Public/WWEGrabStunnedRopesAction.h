#pragma once
#include "CoreMinimal.h"
#include "EWWEDirection.h"
#include "WWEDistanceAnimationVariation.h"
#include "WWEGrabStunnedRopesAction.generated.h"

UCLASS(Blueprintable)
class UWWEGrabStunnedRopesAction : public UWWEDistanceAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFatality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckDirectionToMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEDirection DirectionToMoveOffensiveAfterWinSection;
    
    UWWEGrabStunnedRopesAction();
};

