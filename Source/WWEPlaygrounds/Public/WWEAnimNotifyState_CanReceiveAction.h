#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EWWECanReceiveAction.h"
#include "WWEAnimNotifyState_CanReceiveAction.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEAnimNotifyState_CanReceiveAction : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWECanReceiveAction Type;
    
public:
    UWWEAnimNotifyState_CanReceiveAction();
};

