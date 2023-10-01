#pragma once
#include "CoreMinimal.h"
#include "EWWEButtonCondition.generated.h"

UENUM()
enum class EWWEButtonCondition : int32 {
    None,
    Hold,
    Push,
    COUNT,
};

