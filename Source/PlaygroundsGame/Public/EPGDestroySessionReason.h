#pragma once
#include "CoreMinimal.h"
#include "EPGDestroySessionReason.generated.h"

UENUM(BlueprintType)
enum class EPGDestroySessionReason : uint8 {
    None,
    PlayerLoggedOut,
    PlayerChangedProfile,
};

