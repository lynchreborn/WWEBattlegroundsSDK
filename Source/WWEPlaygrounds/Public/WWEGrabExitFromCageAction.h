#pragma once
#include "CoreMinimal.h"
#include "EWWEDirection.h"
#include "WWEAnimationVariation.h"
#include "WWEGrabExitFromCageAction.generated.h"

UCLASS(Blueprintable)
class UWWEGrabExitFromCageAction : public UWWEAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEDirection DirectionTakingIntoAccountReceiver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFromFloor;
    
    UWWEGrabExitFromCageAction();
};

