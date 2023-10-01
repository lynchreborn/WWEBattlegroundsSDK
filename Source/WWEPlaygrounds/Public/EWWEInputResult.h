#pragma once
#include "CoreMinimal.h"
#include "EWWEInputResult.generated.h"

UENUM(BlueprintType)
enum class EWWEInputResult : uint8 {
    None,
    Success,
    Fail,
    COUNT,
};

