#pragma once
#include "CoreMinimal.h"
#include "EWWENodeConnectorStatus.generated.h"

UENUM(BlueprintType)
enum class EWWENodeConnectorStatus : uint8 {
    SourceOffTargetOff,
    SourceOnTargetOff,
    SourceOnTargetOn,
};

