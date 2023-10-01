#pragma once
#include "CoreMinimal.h"
#include "ENakamaRtErrorCode.generated.h"

UENUM(BlueprintType)
enum class ENakamaRtErrorCode : uint8 {
    UNKNOWN = 0x8,
    CONNECT_ERROR,
    TRANSPORT_ERROR,
    RUNTIME_EXCEPTION = 0x0,
    UNRECOGNIZED_PAYLOAD,
    MISSING_PAYLOAD,
    BAD_INPUT,
    MATCH_NOT_FOUND,
    MATCH_JOIN_REJECTED,
    RUNTIME_FUNCTION_NOT_FOUND,
    RUNTIME_FUNCTION_EXCEPTION,
};

