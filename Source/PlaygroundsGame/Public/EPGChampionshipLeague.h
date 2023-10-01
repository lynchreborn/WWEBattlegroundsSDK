#pragma once
#include "CoreMinimal.h"
#include "EPGChampionshipLeague.generated.h"

UENUM(BlueprintType)
enum class EPGChampionshipLeague : uint8 {
    Bronze,
    Silver,
    Gold,
    Diamond,
    Playoffs,
    Finals,
    COUNT,
};

