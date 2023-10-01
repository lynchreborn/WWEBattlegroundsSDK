#pragma once
#include "CoreMinimal.h"
#include "ESBMessageBoxClosingReason.generated.h"

UENUM(BlueprintType)
enum class ESBMessageBoxClosingReason : uint8 {
    None,
    Ok,
    Cancel,
};

