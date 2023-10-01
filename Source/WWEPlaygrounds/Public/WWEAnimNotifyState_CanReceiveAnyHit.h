#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "WWEAnimNotifyState_CanReceiveAnyHit.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEAnimNotifyState_CanReceiveAnyHit : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UWWEAnimNotifyState_CanReceiveAnyHit();
};

