#pragma once
#include "CoreMinimal.h"
#include "EWWEPhysicalAnimationProfile.generated.h"

UENUM(BlueprintType)
enum class EWWEPhysicalAnimationProfile : uint8 {
    Default,
    RagDoll,
    FullAnim,
};

