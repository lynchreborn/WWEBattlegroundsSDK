#pragma once
#include "CoreMinimal.h"
#include "EWWEGrabBodyPart.h"
#include "WWEAnimationVariation.h"
#include "WWECounteractThrowAction.generated.h"

UCLASS(Blueprintable)
class UWWECounteractThrowAction : public UWWEAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEGrabBodyPart StartBodyPartGrabbed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEGrabBodyPart EndBodyPartGrabbed;
    
    UWWECounteractThrowAction();
};

