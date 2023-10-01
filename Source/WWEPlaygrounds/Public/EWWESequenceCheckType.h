#pragma once
#include "CoreMinimal.h"
#include "EWWESequenceCheckType.generated.h"

UENUM(BlueprintType)
enum class EWWESequenceCheckType : uint8 {
    None,
    LevelEventLaunch,
    COUNT,
};

