#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "WWEAnimNotifyState_CanBreakCurrentAnimation.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEAnimNotifyState_CanBreakCurrentAnimation : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UWWEAnimNotifyState_CanBreakCurrentAnimation();
};

