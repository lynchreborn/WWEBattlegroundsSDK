#pragma once
#include "CoreMinimal.h"
#include "ESBControllerTypeSource.generated.h"

UENUM(BlueprintType)
enum class ESBControllerTypeSource : uint8 {
    PlatformDefault,
    ActivePlayer,
    OwningPlayer,
};

