#pragma once
#include "CoreMinimal.h"
#include "EWWETimeStopOnHitType.generated.h"

UENUM(BlueprintType)
enum class EWWETimeStopOnHitType : uint8 {
    Both,
    Attacker,
    Receiver,
    CantReceive,
    COUNT,
};

