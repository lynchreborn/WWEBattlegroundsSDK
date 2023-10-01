#pragma once
#include "CoreMinimal.h"
#include "WWEAction_AnimBase.h"
#include "WWEAction_ClimbGrabMinigame.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_ClimbGrabMinigame : public UWWEAction_AnimBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHorizontalDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxVerticalDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceToTurnbuckle;
    
public:
    UWWEAction_ClimbGrabMinigame();
};

