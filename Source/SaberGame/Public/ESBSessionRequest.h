#pragma once
#include "CoreMinimal.h"
#include "ESBSessionRequest.generated.h"

UENUM(BlueprintType)
enum class ESBSessionRequest : uint8 {
    None,
    CreateSession,
    DestroySession,
    FindSessions,
    CancelFindSessions,
    JoinSession,
    StartMatchmaking,
    Matchmaking,
    CancelMatchmaking,
    UpdateSession,
    StartSession,
    EndSession,
    RegisterPlayers,
    UnregisterPlayers,
    SanitizeString,
    UpdatePlayerStats,
    UpdateMatchStats,
};

