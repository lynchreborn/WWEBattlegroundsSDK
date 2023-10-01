#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "WWEAnimNotifyState_CanBlockInCurrentAnimation.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEAnimNotifyState_CanBlockInCurrentAnimation : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UWWEAnimNotifyState_CanBlockInCurrentAnimation();
};

