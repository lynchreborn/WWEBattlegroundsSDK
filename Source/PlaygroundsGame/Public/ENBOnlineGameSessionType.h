#pragma once
#include "CoreMinimal.h"
#include "ENBOnlineGameSessionType.generated.h"

UENUM(BlueprintType)
enum class ENBOnlineGameSessionType : uint8 {
    Private,
    Public,
    Invisible,
};

