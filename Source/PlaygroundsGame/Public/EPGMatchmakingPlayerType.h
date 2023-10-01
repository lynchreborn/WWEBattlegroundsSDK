#pragma once
#include "CoreMinimal.h"
#include "EPGMatchmakingPlayerType.generated.h"

UENUM(BlueprintType)
enum class EPGMatchmakingPlayerType : uint8 {
    Invalid,
    LocalPlayer1,
    LocalPlayer2,
    LocalPlayer3 = 0x4,
    LocalPlayer4 = 0x8,
    CPU = 0x10,
    Friend = 0x20,
    RemotePlayer = 0x40,
    COUNT = 0x80,
};

