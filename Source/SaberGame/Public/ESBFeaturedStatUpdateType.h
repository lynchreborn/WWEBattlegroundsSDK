#pragma once
#include "CoreMinimal.h"
#include "ESBFeaturedStatUpdateType.generated.h"

UENUM(BlueprintType)
enum class ESBFeaturedStatUpdateType : uint8 {
    Acumulative,
    IntOverwriteAlways,
    IntOverwriteOnlyGreater,
    FloatOverwriteAlways,
};

