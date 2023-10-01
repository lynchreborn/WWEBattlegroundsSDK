#pragma once
#include "CoreMinimal.h"
#include "EWWECharacterFilterFlags.generated.h"

UENUM(BlueprintType)
enum class EWWECharacterFilterFlags : uint8 {
    Gender,
    Rarity,
    FightingStyle,
    Favourite,
    Custom,
};

