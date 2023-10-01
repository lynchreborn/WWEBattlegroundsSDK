#pragma once
#include "CoreMinimal.h"
#include "EWWERunningHitCommentSettings.generated.h"

UENUM(BlueprintType)
enum class EWWERunningHitCommentSettings : uint8 {
    Hit,
    HitAfterRebound,
    Dive,
    COUNT,
};

