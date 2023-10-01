#pragma once
#include "CoreMinimal.h"
#include "EWWEBodyPart.h"
#include "EWWEDirection.h"
#include "EWWEInterestFactor.h"
#include "EWWETypeObjects.h"
#include "WWEDistanceAnimationVariation.h"
#include "WWEGroundHitAction.generated.h"

UCLASS(Blueprintable)
class UWWEGroundHitAction : public UWWEDistanceAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEBodyPart DominantBodyPart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWETypeObjects WeaponType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEInterestFactor InterestDone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEInterestFactor InterestReceive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEDirection DirectionFromAbove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDumpedBySpecialKick;
    
    UWWEGroundHitAction();
};

