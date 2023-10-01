#pragma once
#include "CoreMinimal.h"
#include "EWWEDirection.generated.h"

UENUM(BlueprintType)
enum class EWWEDirection : uint8 {
    None,
    Left,
    Right,
    Front,
    Back,
    LeftFront,
    RightFront,
    LeftBack,
    RightBack,
    COUNT,
};

