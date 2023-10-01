#pragma once
#include "CoreMinimal.h"
#include "EPGMenuRenderElementType.generated.h"

UENUM(BlueprintType)
enum class EPGMenuRenderElementType : uint8 {
    Favourites,
    Random,
    List,
    RandomList,
};

