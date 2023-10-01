#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "WWEAnimNotifyState_DisableLookAt.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEAnimNotifyState_DisableLookAt : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UWWEAnimNotifyState_DisableLookAt();
};

