#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstanceProxy.h"
#include "SBAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct SABERGAME_API FSBAnimInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    FSBAnimInstanceProxy();
};

