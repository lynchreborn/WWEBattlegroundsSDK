#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "WWEAnimNotifyState_NoAdjustOnCol.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEAnimNotifyState_NoAdjustOnCol : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UWWEAnimNotifyState_NoAdjustOnCol();
};

