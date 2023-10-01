#pragma once
#include "CoreMinimal.h"
#include "EWWEImpactType.generated.h"

UENUM(BlueprintType)
enum class EWWEImpactType : uint8 {
    None,
    Hit,
    ReceiveHit,
    COUNT,
};

