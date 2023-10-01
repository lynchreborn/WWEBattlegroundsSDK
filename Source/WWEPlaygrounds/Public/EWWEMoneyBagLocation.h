#pragma once
#include "CoreMinimal.h"
#include "EWWEMoneyBagLocation.generated.h"

UENUM(BlueprintType)
enum class EWWEMoneyBagLocation : uint8 {
    Any,
    Ground,
    ClimbingLeft,
    ClimbingRight,
    ClimbingUp,
    CageTop,
    COUNT,
};

