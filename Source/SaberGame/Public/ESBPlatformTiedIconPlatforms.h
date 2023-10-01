#pragma once
#include "CoreMinimal.h"
#include "ESBPlatformTiedIconPlatforms.generated.h"

UENUM(BlueprintType)
enum class ESBPlatformTiedIconPlatforms : uint8 {
    NONE,
    PS4,
    XBOX,
    PC,
    SWITCH,
    STADIA,
    COUNT,
};

