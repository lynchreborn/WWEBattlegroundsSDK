#pragma once
#include "CoreMinimal.h"
#include "ESBWaitingGameState.generated.h"

UENUM(BlueprintType)
enum class ESBWaitingGameState : uint8 {
    Undefined,
    ConnectingPlayers,
    SyncingInitialData,
    ConfiguringMatch,
    SyncingFinalData,
    TravelingToArena,
    LoadingArenaLevels,
    ReadyToSpawnActors,
    SpawningActors,
    ReadyToStartMatch,
};

