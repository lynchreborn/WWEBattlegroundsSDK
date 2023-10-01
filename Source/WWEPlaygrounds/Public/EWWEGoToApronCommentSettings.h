#pragma once
#include "CoreMinimal.h"
#include "EWWEGoToApronCommentSettings.generated.h"

UENUM(BlueprintType)
enum class EWWEGoToApronCommentSettings : uint8 {
    FromInside,
    FromOutside,
    FromIrish,
    COUNT,
};

