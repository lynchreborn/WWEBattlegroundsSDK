#pragma once
#include "CoreMinimal.h"
#include "EWWEAIDistance.generated.h"

UENUM(BlueprintType)
enum class EWWEAIDistance : uint8 {
    NONE,
    CloseCombat,
    FarCombat,
    TopRopesHit,
    TopRopesThrow,
    WanderDistance,
    WanderThreshold,
};

