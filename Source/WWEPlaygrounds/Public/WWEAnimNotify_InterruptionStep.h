#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EWWEAnimInterruptionStep.h"
#include "WWEAnimNotify_InterruptionStep.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class WWEPLAYGROUNDS_API UWWEAnimNotify_InterruptionStep : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEAnimInterruptionStep InterruptionStep;
    
public:
    UWWEAnimNotify_InterruptionStep();
};

