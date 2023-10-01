#pragma once
#include "CoreMinimal.h"
#include "ENakamaErrorCode.generated.h"

UENUM(BlueprintType)
enum class ENakamaErrorCode : uint8 {
    Unknown,
    NotFound,
    AlreadyExists,
    InvalidArgument,
    Unauthenticated,
    PermissionDenied,
    ConnectionError,
    InternalError,
    CancelledByUser,
};

