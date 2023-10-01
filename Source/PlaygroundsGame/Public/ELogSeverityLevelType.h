#pragma once
#include "CoreMinimal.h"
#include "ELogSeverityLevelType.generated.h"

UENUM(BlueprintType)
enum class ELogSeverityLevelType : uint8 {
    Verbose,
    Debug,
    Information,
    Warning,
    Error,
    Fatal,
};

