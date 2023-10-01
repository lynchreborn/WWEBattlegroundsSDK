#pragma once
#include "CoreMinimal.h"
#include "EWWEWeaponState.generated.h"

UENUM(BlueprintType)
enum class EWWEWeaponState : uint8 {
    Invalid,
    PhysicSimulation,
    Grabbing,
    Attached,
    ControlledFlight,
    COUNT,
};

