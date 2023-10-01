#pragma once
#include "CoreMinimal.h"
#include "EWWEInputUsable.generated.h"

UENUM(BlueprintType)
enum class EWWEInputUsable : uint8 {
    None,
    UseTierOne,
    UseTierTwo,
    UseTierThree,
    COUNT,
};

