#pragma once
#include "CoreMinimal.h"
#include "EWWESpringboardCommentSettings.generated.h"

UENUM(BlueprintType)
enum class EWWESpringboardCommentSettings : uint8 {
    ApronHit,
    ApronThrow,
    ApronCounterThrow,
    Hit,
    Throw,
    CounterThrow,
    COUNT,
};

