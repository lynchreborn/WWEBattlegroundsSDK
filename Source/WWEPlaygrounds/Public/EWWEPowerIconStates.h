#pragma once
#include "CoreMinimal.h"
#include "EWWEPowerIconStates.generated.h"

UENUM()
enum class EWWEPowerIconStates : int32 {
    None,
    Deactive,
    Off,
    On,
    InUse,
    COUNT,
};

