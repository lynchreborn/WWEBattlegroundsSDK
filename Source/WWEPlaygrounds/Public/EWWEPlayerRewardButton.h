#pragma once
#include "CoreMinimal.h"
#include "EWWEPlayerRewardButton.generated.h"

UENUM(BlueprintType)
enum class EWWEPlayerRewardButton : uint8 {
    None,
    Exit,
    FightRoom,
    PlayAgain,
    Count,
};

