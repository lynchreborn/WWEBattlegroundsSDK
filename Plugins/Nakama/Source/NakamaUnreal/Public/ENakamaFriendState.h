#pragma once
#include "CoreMinimal.h"
#include "ENakamaFriendState.generated.h"

UENUM(BlueprintType)
enum class ENakamaFriendState : uint8 {
    FRIEND,
    INVITE_SENT,
    INVITE_RECEIVED,
    BLOCKED,
    ALL,
};

