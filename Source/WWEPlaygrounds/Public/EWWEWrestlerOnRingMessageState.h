#pragma once
#include "CoreMinimal.h"
#include "EWWEWrestlerOnRingMessageState.generated.h"

UENUM(BlueprintType)
enum class EWWEWrestlerOnRingMessageState : uint8 {
    None,
    NewOpponentEnteringRing,
    YouAreEnteringRing,
    WaitingYourTurnToEnterRing,
    YouAreNextToEnterRing,
};

