#pragma once
#include "CoreMinimal.h"
#include "EWWESpecialStateCheck.generated.h"

UENUM(BlueprintType)
enum class EWWESpecialStateCheck : uint8 {
    TurnbuckleStunnedFacingOut,
    AfterIrishWhipRopes,
    ReadyForSpecialTopRopes,
    ReadyForSpecialSpringboard,
    TurnbuckleCarryThrow,
    TurnbuckleTaunt,
    AfterSpecialIrishKick,
};

