#pragma once
#include "CoreMinimal.h"
#include "EWWEActionGroup.generated.h"

UENUM(BlueprintType)
enum class EWWEActionGroup : uint8 {
    Default,
    Technician,
    HighFlyer,
    Powerhouse,
    Brawler,
    AllRounder,
    COUNT,
};

