#pragma once
#include "CoreMinimal.h"
#include "EWWECounteractCommentSettings.generated.h"

UENUM(BlueprintType)
enum class EWWECounteractCommentSettings : uint8 {
    Hit,
    HitApron,
    Grab,
    HitAfterParry,
    HitApronAfterParry,
    COUNT,
};

