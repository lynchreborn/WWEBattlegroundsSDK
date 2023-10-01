#pragma once
#include "CoreMinimal.h"
#include "EWWETurnbuckleLocation.generated.h"

UENUM(BlueprintType)
enum class EWWETurnbuckleLocation : uint8 {
    None,
    LeftFront,
    RightFront,
    LeftBack,
    RightBack,
    COUNT,
};

