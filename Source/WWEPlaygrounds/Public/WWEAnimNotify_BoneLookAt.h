#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "WWEAnimNotify_BoneLookAt.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEAnimNotify_BoneLookAt : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
public:
    UWWEAnimNotify_BoneLookAt();
};

