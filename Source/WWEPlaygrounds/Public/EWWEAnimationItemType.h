#pragma once
#include "CoreMinimal.h"
#include "EWWEAnimationItemType.generated.h"

UENUM(BlueprintType)
enum class EWWEAnimationItemType : uint8 {
    None,
    Taunt,
    SignatureMove,
    Finisher,
    Win,
    Lose,
    COUNT,
};

