#pragma once
#include "CoreMinimal.h"
#include "EWWEGrabBodyPart.h"
#include "EWWEGrabTypes.h"
#include "WWEDistanceAnimationVariation.h"
#include "WWEGrabAction.generated.h"

UCLASS(Blueprintable)
class UWWEGrabAction : public UWWEDistanceAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEGrabBodyPart BodyPartToGrab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEGrabTypes GrabType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlipIKEffectorSockets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnApron;
    
    UWWEGrabAction();
};

