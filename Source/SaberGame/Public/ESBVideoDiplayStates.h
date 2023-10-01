#pragma once
#include "CoreMinimal.h"
#include "ESBVideoDiplayStates.generated.h"

UENUM(BlueprintType)
enum class ESBVideoDiplayStates : uint8 {
    None,
    Initializing,
    PlayingVideo,
    PausedVideo,
    Leaving,
    COUNT,
};

