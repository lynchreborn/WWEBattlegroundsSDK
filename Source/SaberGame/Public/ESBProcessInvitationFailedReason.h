#pragma once
#include "CoreMinimal.h"
#include "ESBProcessInvitationFailedReason.generated.h"

UENUM(BlueprintType)
enum class ESBProcessInvitationFailedReason : uint8 {
    NONE,
    CannotBeConsumedNow,
    AllChunksNotInstalled,
    InitialCardsNotOpened,
    ActiveUserChanged,
    InGameSession,
    NotInRootMenu,
    ProcessingPartyPlay,
    InvalidInvitation,
    COUNT,
};

