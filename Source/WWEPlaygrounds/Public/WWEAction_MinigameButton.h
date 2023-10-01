#pragma once
#include "CoreMinimal.h"
#include "EWWEActionTypes.h"
#include "WWEActionNode.h"
#include "WWEAction_MinigameButton.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAction_MinigameButton : public UWWEActionNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeDurationFeedbackReleaseFromCarriedByCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    EWWEActionTypes ActionType;
    
public:
    UWWEAction_MinigameButton();
};

