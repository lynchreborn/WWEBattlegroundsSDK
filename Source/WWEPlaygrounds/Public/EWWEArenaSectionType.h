#pragma once
#include "CoreMinimal.h"
#include "EWWEArenaSectionType.generated.h"

UENUM(BlueprintType)
enum class EWWEArenaSectionType : uint8 {
    NONE,
    Outfit,
    Turnbuckle,
    Pad,
    RingFloor,
    Rope,
    PlaygroundFloor,
    PlaygroundBorder,
    RingCover,
    Crowd,
    Sticker,
    Lighting,
    Effects,
    Music,
    Name,
    Weapons,
    COUNT,
};

