#pragma once
#include "CoreMinimal.h"
#include "ESBSoundFadeType.generated.h"

UENUM(BlueprintType)
enum class ESBSoundFadeType : uint8 {
    FadeIn,
    FadeOut,
    COUNT,
};

