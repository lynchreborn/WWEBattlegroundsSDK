#pragma once
#include "CoreMinimal.h"
#include "ENakamaGroupState.generated.h"

UENUM(BlueprintType)
enum class ENakamaGroupState : uint8 {
    SUPERADMIN,
    ADMIN,
    MEMBER,
    JOIN_REQUEST,
};

