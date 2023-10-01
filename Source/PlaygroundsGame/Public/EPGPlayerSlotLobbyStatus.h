#pragma once
#include "CoreMinimal.h"
#include "EPGPlayerSlotLobbyStatus.generated.h"

UENUM(BlueprintType)
enum class EPGPlayerSlotLobbyStatus : uint8 {
    Unclaimed,
    Claimed,
    CharacterChosen,
    Ready,
    COUNT,
    NONE,
};

