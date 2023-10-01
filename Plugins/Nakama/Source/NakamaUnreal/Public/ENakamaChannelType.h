#pragma once
#include "CoreMinimal.h"
#include "ENakamaChannelType.generated.h"

UENUM(BlueprintType)
enum class ENakamaChannelType : uint8 {
    TYPE_UNSPECIFIED,
    ROOM,
    DIRECT_MESSAGE,
    GROUP,
};

