#pragma once
#include "CoreMinimal.h"
#include "EPGPlatformIconPlatform.generated.h"

UENUM(BlueprintType)
enum class EPGPlatformIconPlatform : uint8 {
    NONE,
    PS4,
    PC,
    Xbox,
    NSwitch,
    NSwitchBis,
    COUNT,
};

