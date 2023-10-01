#pragma once
#include "CoreMinimal.h"
#include "ENakamaPresenceEvent.generated.h"

UENUM(BlueprintType)
enum class ENakamaPresenceEvent : uint8 {
    None,
    LEAVES,
    JOINS,
};

