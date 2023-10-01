#pragma once
#include "CoreMinimal.h"
#include "EPGMatchmakingConfigState.generated.h"

UENUM(BlueprintType)
enum class EPGMatchmakingConfigState : uint8 {
    ConfiguringSlots,
    CheckingLocalPlayers,
    WaitingForFriends,
    SearchingMatch,
    TravellingToLobby,
    InviteeWaitingForFriends,
    COUNT,
};

