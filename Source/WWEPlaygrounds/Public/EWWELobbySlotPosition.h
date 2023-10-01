#pragma once
#include "CoreMinimal.h"
#include "EWWELobbySlotPosition.generated.h"

UENUM()
enum class EWWELobbySlotPosition : uint32 {
    None,
    LeftSide,
    RightSide,
    Center,
    COUNT,
};

