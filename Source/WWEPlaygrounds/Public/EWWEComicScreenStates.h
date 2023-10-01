#pragma once
#include "CoreMinimal.h"
#include "EWWEComicScreenStates.generated.h"

UENUM(BlueprintType)
enum class EWWEComicScreenStates : uint8 {
    None,
    Initializing,
    Idle,
    StripTransitioning,
    PageTransitioning,
    Leaving,
    COUNT,
};

