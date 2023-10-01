#pragma once
#include "CoreMinimal.h"
#include "EPGSoundType.generated.h"

UENUM(BlueprintType)
enum class EPGSoundType : uint8 {
    None,
    Bodyfall,
    PreJump,
    Step_Fall,
    Step,
    Bounce,
    COUNT,
};

