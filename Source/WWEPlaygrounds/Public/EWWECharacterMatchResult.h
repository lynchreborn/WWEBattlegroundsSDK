#pragma once
#include "CoreMinimal.h"
#include "EWWECharacterMatchResult.generated.h"

UENUM(BlueprintType)
enum class EWWECharacterMatchResult : uint8 {
    Unfinished,
    Win,
    Lose,
};

