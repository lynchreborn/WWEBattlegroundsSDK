#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimMontage.h"
#include "SBAnimMontageInstance.generated.h"

USTRUCT(BlueprintType)
struct FSBAnimMontageInstance : public FAnimMontageInstance {
    GENERATED_BODY()
public:
    SABERGAME_API FSBAnimMontageInstance();
};

