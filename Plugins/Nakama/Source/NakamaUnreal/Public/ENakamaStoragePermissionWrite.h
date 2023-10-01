#pragma once
#include "CoreMinimal.h"
#include "ENakamaStoragePermissionWrite.generated.h"

UENUM(BlueprintType)
enum class ENakamaStoragePermissionWrite : uint8 {
    NO_WRITE,
    OWNER_WRITE,
};

