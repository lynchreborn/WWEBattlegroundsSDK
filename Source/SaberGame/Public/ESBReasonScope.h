#pragma once
#include "CoreMinimal.h"
#include "ESBReasonScope.generated.h"

UENUM(BlueprintType)
enum class ESBReasonScope : uint8 {
    All,
    OnlyLocal,
    OnlyRemote,
    COUNT,
};

