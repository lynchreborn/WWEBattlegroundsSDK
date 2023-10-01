#pragma once
#include "CoreMinimal.h"
#include "EWWEPlatforms.generated.h"

UENUM(BlueprintType)
enum class EWWEPlatforms : uint8 {
    PS4,
    XBOX,
    PC,
    Switch,
    Stadia,
    COUNT,
};

