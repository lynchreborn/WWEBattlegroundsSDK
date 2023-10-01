#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "WWEAnimNotifyState_DenyRotation.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEAnimNotifyState_DenyRotation : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UWWEAnimNotifyState_DenyRotation();
};

