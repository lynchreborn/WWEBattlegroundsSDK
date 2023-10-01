#pragma once
#include "CoreMinimal.h"
#include "EWWESpecialOptions.generated.h"

UENUM(BlueprintType)
enum class EWWESpecialOptions : uint8 {
    None,
    AllBattleGround,
    OnlyOnTheRing,
    No,
    Yes,
    Unlimited,
    COUNT,
};

