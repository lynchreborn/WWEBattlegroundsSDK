#pragma once
#include "CoreMinimal.h"
#include "EWWECameraSequenceDurationFitType.generated.h"

UENUM(BlueprintType)
enum class EWWECameraSequenceDurationFitType : uint8 {
    AutoFit,
    FitToParam,
    AutoCut,
    CutToParam,
    COUNT,
};

