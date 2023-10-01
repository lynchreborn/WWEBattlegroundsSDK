#pragma once
#include "CoreMinimal.h"
#include "ESBPopupSceneClosingReason.generated.h"

UENUM(BlueprintType)
enum class ESBPopupSceneClosingReason : uint8 {
    None,
    Ok,
    Cancel,
};

