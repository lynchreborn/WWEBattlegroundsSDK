#pragma once
#include "CoreMinimal.h"
#include "EWWEIngameMenuAction.generated.h"

UENUM(BlueprintType)
enum class EWWEIngameMenuAction : uint8 {
    None,
    Continue,
    Reset,
    Options,
    DailyChallenges,
    Exit,
    Tutorial,
    Controls,
    Count,
};

