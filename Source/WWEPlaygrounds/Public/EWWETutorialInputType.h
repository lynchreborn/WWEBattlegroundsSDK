#pragma once
#include "CoreMinimal.h"
#include "EWWETutorialInputType.generated.h"

UENUM(BlueprintType)
enum class EWWETutorialInputType : uint8 {
    None,
    Combined,
    Alternative,
    Sequential,
    COUNT,
};

