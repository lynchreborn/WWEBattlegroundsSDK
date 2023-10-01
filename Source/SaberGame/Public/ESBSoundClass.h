#pragma once
#include "CoreMinimal.h"
#include "ESBSoundClass.generated.h"

UENUM(BlueprintType)
enum class ESBSoundClass : uint8 {
    Music,
    SFX,
    Voices,
    SFXNoSlomo,
    SFXSlomo,
    COUNT,
};

