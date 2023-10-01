#pragma once
#include "CoreMinimal.h"
#include "EWWEReceiveTopRopesCommentSettings.generated.h"

UENUM(BlueprintType)
enum class EWWEReceiveTopRopesCommentSettings : uint8 {
    ThrowInside,
    ThrowOutside,
    HitOutside,
    HitInside,
    CounterThrowInside,
    CounterThrowOutside,
    COUNT,
};

