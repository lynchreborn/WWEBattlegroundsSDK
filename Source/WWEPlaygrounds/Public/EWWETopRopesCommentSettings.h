#pragma once
#include "CoreMinimal.h"
#include "EWWETopRopesCommentSettings.generated.h"

UENUM(BlueprintType)
enum class EWWETopRopesCommentSettings : uint8 {
    FailHitOutside,
    FailHitInside,
    FailThrowOutside,
    FailThrowInside,
    COUNT,
};

