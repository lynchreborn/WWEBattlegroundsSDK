#pragma once
#include "CoreMinimal.h"
#include "EItemType.generated.h"

UENUM(BlueprintType)
enum class EItemType : uint8 {
    Unknown,
    Character,
    Ball,
    PlayGround,
    CrazyEvent,
    CoinsBundle,
    CardsPacks,
};

