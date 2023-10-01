#pragma once
#include "CoreMinimal.h"
#include "EWWEDailyQuestGameMode.generated.h"

UENUM(BlueprintType)
enum class EWWEDailyQuestGameMode : uint8 {
    NONE,
    OneVSOne,
    TagTeam,
    TornadoTag,
    SteelCage1vs1,
    SteelCage2vs2,
    TripleThreat,
    FatalForWay,
    RoyalRumble,
    KigOfTheRing,
    Tournament,
    Gauntlet,
    COUNT,
};

