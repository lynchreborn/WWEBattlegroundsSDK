#pragma once
#include "CoreMinimal.h"
#include "EWWENewActionMode.generated.h"

UENUM(BlueprintType)
enum class EWWENewActionMode : uint8 {
    Ignore,
    Enqueue,
    AbortCurrent,
};

