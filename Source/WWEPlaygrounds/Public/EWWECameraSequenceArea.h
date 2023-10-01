#pragma once
#include "CoreMinimal.h"
#include "EWWECameraSequenceArea.generated.h"

UENUM(BlueprintType)
enum class EWWECameraSequenceArea : uint8 {
    Anywhere,
    OnlyRing,
    DistanceFromWall,
};

