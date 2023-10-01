#pragma once
#include "CoreMinimal.h"
#include "EWWEInteractableWeaponLifeType.generated.h"

UENUM(BlueprintType)
enum class EWWEInteractableWeaponLifeType : uint8 {
    Invalid,
    ByTime,
    ByHits,
    InfiniteHits,
};

