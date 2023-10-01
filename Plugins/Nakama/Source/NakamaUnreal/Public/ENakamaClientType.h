#pragma once
#include "CoreMinimal.h"
#include "ENakamaClientType.generated.h"

UENUM(BlueprintType)
enum class ENakamaClientType : uint8 {
    DEFAULT,
    GRPC,
    REST,
};

