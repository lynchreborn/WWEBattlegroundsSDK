#pragma once
#include "CoreMinimal.h"
#include "ENakamaStoragePermissionRead.generated.h"

UENUM(BlueprintType)
enum class ENakamaStoragePermissionRead : uint8 {
    NO_READ,
    OWNER_READ,
    PUBLIC_READ,
};

