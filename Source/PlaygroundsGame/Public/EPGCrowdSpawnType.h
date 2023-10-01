#pragma once
#include "CoreMinimal.h"
#include "EPGCrowdSpawnType.generated.h"

UENUM(BlueprintType)
enum class EPGCrowdSpawnType : uint8 {
    LOCAL,
    VISITOR,
    NEUTRAL,
    ANY_TEAM,
    ANY,
    COUNT,
};

