#pragma once
#include "CoreMinimal.h"
#include "ESBProcessPartyPlayEventFailedReason.generated.h"

UENUM(BlueprintType)
enum class ESBProcessPartyPlayEventFailedReason : uint8 {
    NONE,
    CannotBeConsumedNow,
    AllChunksNotInstalled,
    InitialCardsNotOpened,
    ActiveUserChanged,
    InGameSession,
    NotInRootMenu,
    COUNT,
};

