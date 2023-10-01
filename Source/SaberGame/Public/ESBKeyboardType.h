#pragma once
#include "CoreMinimal.h"
#include "ESBKeyboardType.generated.h"

UENUM(BlueprintType)
enum class ESBKeyboardType : uint8 {
    None,
    Default,
    Qwertz,
    Azerty,
    DVorak,
};

