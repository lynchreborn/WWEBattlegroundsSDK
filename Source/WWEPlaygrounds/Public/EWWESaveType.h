#pragma once
#include "CoreMinimal.h"
#include "EWWESaveType.generated.h"

UENUM(BlueprintType)
enum class EWWESaveType : uint8 {
    Online,
    Offline,
    Both,
};

