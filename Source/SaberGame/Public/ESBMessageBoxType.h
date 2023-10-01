#pragma once
#include "CoreMinimal.h"
#include "ESBMessageBoxType.generated.h"

UENUM(BlueprintType)
enum class ESBMessageBoxType : uint8 {
    OK,
    Accept,
    Cancel,
    AcceptCancel,
    YesNo,
    NoButtons,
    NoButtonsAnim,
};

