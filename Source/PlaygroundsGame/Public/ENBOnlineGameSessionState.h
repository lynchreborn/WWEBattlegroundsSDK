#pragma once
#include "CoreMinimal.h"
#include "ENBOnlineGameSessionState.generated.h"

UENUM(BlueprintType)
enum class ENBOnlineGameSessionState : uint8 {
    None,
    Creating,
    Created,
    Opening,
    Open,
    Closing,
    Closed,
    Searching,
    ReadyToConnect,
    Connecting,
    Connected,
    Disconnecting,
};

