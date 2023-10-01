#pragma once
#include "CoreMinimal.h"
#include "EWWECrowdCheerUpType.generated.h"

UENUM(BlueprintType)
enum class EWWECrowdCheerUpType : uint8 {
    CheerUpShort,
    CheerUpLong,
    Amazed,
    Oh,
    Climax,
    Disappointment,
    COUNT,
};

