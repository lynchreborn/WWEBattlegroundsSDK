#pragma once
#include "CoreMinimal.h"
#include "EWWEPlayerRewardsState.generated.h"

UENUM(BlueprintType)
enum class EWWEPlayerRewardsState : uint8 {
    InitScreen,
    UpdatingLevels,
    WaitingExit,
    COUNT,
};

