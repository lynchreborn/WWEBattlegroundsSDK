#pragma once
#include "CoreMinimal.h"
#include "WWEAction_AnimBase.h"
#include "WWEAction_ReceiveGrabBack.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_ReceiveGrabBack : public UWWEAction_AnimBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    bool bShowingHudMinigame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* MinigameCountCurve;
    
public:
    UWWEAction_ReceiveGrabBack();
};

