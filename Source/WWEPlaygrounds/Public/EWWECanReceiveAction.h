#pragma once
#include "CoreMinimal.h"
#include "EWWECanReceiveAction.generated.h"

UENUM(BlueprintType)
enum class EWWECanReceiveAction : uint8 {
    None,
    FromDumped,
    FromStandUp,
    FromTurnbuckle,
    FromApron,
    COUNT,
};

