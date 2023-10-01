#pragma once
#include "CoreMinimal.h"
#include "EWWEVanityItemType.generated.h"

UENUM(BlueprintType)
enum class EWWEVanityItemType : uint8 {
    NONE,
    Hat,
    HairStyle,
    FacialHair,
    Glass,
    Mask,
    Outfit,
    Chest,
    WristbandUp,
    WristbandDown,
    Gloves,
    Pants,
    LeftLeg,
    RightLeg,
    Shoes,
    FullBody,
    COUNT,
};

