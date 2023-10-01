#pragma once
#include "CoreMinimal.h"
#include "EWWESkinRenderProcessType.generated.h"

UENUM(BlueprintType)
enum class EWWESkinRenderProcessType : uint8 {
    Diffuse1,
    Diffuse2,
    SAR1,
    SAR2,
    Normal,
};

