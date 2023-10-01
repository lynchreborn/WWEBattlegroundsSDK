#pragma once
#include "CoreMinimal.h"
#include "EWWEDirection.h"
#include "EWWEGrabTypes.h"
#include "WWEDistanceAnimationVariation.h"
#include "WWEStandUpStunnedAction.generated.h"

UCLASS(Blueprintable)
class UWWEStandUpStunnedAction : public UWWEDistanceAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFaceUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEDirection DirectionTakingIntoAccountRivalSeenFromAbove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEGrabTypes GrabType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyReceive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBackLeft;
    
    UWWEStandUpStunnedAction();
};

