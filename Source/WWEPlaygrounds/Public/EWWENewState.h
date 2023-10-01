#pragma once
#include "CoreMinimal.h"
#include "EWWENewState.generated.h"

UENUM(BlueprintType)
enum class EWWENewState : uint8 {
    Loading,
    Image,
    Video,
};

