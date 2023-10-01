#pragma once
#include "CoreMinimal.h"
#include "ENakamaRealtimeClientProtocol.generated.h"

UENUM(BlueprintType)
enum class ENakamaRealtimeClientProtocol : uint8 {
    Protobuf,
    Json,
};

