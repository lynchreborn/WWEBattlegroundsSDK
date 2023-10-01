#pragma once
#include "CoreMinimal.h"
#include "EPGCharacterBody.generated.h"

UENUM(BlueprintType)
enum class EPGCharacterBody : uint8 {
    CharacterBody01,
    CharacterBody02,
    CharacterBody03,
    CharacterBody04,
    CharacterBody05,
    CharacterBody06,
    Count,
    None = 0xFF,
};

