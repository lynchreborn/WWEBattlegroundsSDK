#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EWWEUserProgressionCondition.h"
#include "WWEAnimNotify_CharismaReward.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class WWEPLAYGROUNDS_API UWWEAnimNotify_CharismaReward : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEUserProgressionCondition ProgressionCondition;
    
public:
    UWWEAnimNotify_CharismaReward();
};

