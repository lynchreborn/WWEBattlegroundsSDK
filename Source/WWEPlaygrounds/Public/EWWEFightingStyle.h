#pragma once
#include "CoreMinimal.h"
#include "EWWEFightingStyle.generated.h"

UENUM(BlueprintType)
enum class EWWEFightingStyle : uint8 {
    Technician,
    HighFlyer,
    Powerhouse,
    Brawler,
    AllRounder,
    COUNT,
};

