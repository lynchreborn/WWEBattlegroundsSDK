#pragma once
#include "CoreMinimal.h"
#include "ESBPlatformType.generated.h"

UENUM(BlueprintType)
enum class ESBPlatformType : uint8 {
    Unknown,
    PlayStation4,
    PlayStation5,
    XboxOne,
    XboxSeriesX,
    Switch,
    LinuxStadia,
    LinuxServer,
    WindowsEditor,
    WindowsServer,
    WindowsSteam,
};

