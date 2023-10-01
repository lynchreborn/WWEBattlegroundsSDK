#pragma once
#include "CoreMinimal.h"
#include "ENakamaUserGroupState.generated.h"

UENUM(BlueprintType)
enum class ENakamaUserGroupState : uint8 {
    SUPERADMIN,
    ADMIN,
    MEMBER,
    JOIN_REQUEST,
    ALL,
};

