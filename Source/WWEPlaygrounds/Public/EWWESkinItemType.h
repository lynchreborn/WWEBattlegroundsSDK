#pragma once
#include "CoreMinimal.h"
#include "EWWESkinItemType.generated.h"

UENUM(BlueprintType)
enum class EWWESkinItemType : uint8 {
    NONE,
    SkinColor,
    SkinAge,
    Tattoo,
    BodyPaint,
    Scars,
    HairStyle,
    FacialHair,
    BodyHair,
    Eyes,
    Teeth,
    Outfit,
    COUNT,
};

