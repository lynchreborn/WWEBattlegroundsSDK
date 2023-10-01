#pragma once
#include "CoreMinimal.h"
#include "EWWEBarType.generated.h"

UENUM(BlueprintType)
enum class EWWEBarType : uint8 {
    None,
    BlueBar,
    RedBar,
    YellowBar,
    COUNT,
};

