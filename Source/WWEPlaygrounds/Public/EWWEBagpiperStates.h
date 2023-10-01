#pragma once
#include "CoreMinimal.h"
#include "EWWEBagpiperStates.generated.h"

UENUM()
enum class EWWEBagpiperStates : int32 {
    None,
    Playing,
    Sleeping,
    GetNewBagpipes,
    COUNT,
};

