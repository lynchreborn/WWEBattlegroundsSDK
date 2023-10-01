#pragma once
#include "CoreMinimal.h"
#include "EPGLocalPlayerSlotStatus.generated.h"

UENUM()
enum class EPGLocalPlayerSlotStatus : int32 {
    Initial,
    CheckPending,
    Checking,
    CheckedSucceeded,
    WaitingForFriend,
    FriendJoined,
};

