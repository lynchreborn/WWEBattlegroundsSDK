#pragma once
#include "CoreMinimal.h"
#include "EWWEThrowCommentSettings.generated.h"

UENUM(BlueprintType)
enum class EWWEThrowCommentSettings : uint8 {
    NormalThrow,
    Irish,
    Combo,
    CounterCombo,
    CounterIrish,
    CounterNormal,
    PowerUp,
    Apron,
    COUNT,
};

