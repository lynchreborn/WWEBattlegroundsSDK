#pragma once
#include "CoreMinimal.h"
#include "EPGPlatformIconType.generated.h"

UENUM(BlueprintType)
enum class EPGPlatformIconType : uint8 {
    FaceDown,
    FaceLeft,
    FaceRight,
    FaceTop,
    ShoulderLeft,
    ShoulderRight,
    TriggerLeft,
    TriggerRight,
    ThumbstickLeft,
    ThumbstickRight,
    Controller,
    ControllerDisabled,
    ControllerType2,
    ControllerType3,
    ControllerType4,
    PlatformIcon,
};

