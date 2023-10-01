#pragma once
#include "CoreMinimal.h"
#include "ESBControllerType.generated.h"

UENUM(BlueprintType)
enum class ESBControllerType : uint8 {
    None,
    Keyboard,
    Gamepad,
    PS4,
    XboxOne,
    SwitchPro,
    SwitchDualJoyCon,
    SwitchLeftJoyCon,
    SwitchRightJoyCon,
    SwitchHandHeld,
    Stadia,
};

