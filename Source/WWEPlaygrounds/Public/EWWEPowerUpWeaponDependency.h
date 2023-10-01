#pragma once
#include "CoreMinimal.h"
#include "EWWEPowerUpWeaponDependency.generated.h"

UENUM(BlueprintType)
enum class EWWEPowerUpWeaponDependency : uint8 {
    Incompatible,
    Irrelevant,
    Needed,
};

