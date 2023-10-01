#pragma once
#include "CoreMinimal.h"
#include "EWWEItemCategory.generated.h"

UENUM(BlueprintType)
enum class EWWEItemCategory : uint8 {
    Root,
    Head,
    UpperBody,
    LowerBody,
    FullBody,
    LeftArm,
    RightArm,
    COUNT,
};

