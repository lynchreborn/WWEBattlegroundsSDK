#pragma once
#include "CoreMinimal.h"
#include "ESBLightbarColor.generated.h"

UENUM()
enum class ESBLightbarColor {
    LC_Blue,
    LC_Red,
    LC_Green,
    LC_Pink,
    LC_Remote,
    LC_None = 0xFF,
    LC_MAX UMETA(Hidden),
};

