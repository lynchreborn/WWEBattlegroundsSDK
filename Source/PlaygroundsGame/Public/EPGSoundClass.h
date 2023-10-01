#pragma once
#include "CoreMinimal.h"
#include "EPGSoundClass.generated.h"

UENUM(BlueprintType)
enum class EPGSoundClass : uint8 {
    Music,
    SFX,
    Voices,
    SFXNoSlomo,
    SFXSlomo,
    COUNT,
};

