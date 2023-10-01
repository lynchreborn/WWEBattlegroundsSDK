#pragma once
#include "CoreMinimal.h"
#include "EInputUIChannel.generated.h"

UENUM(BlueprintType)
enum class EInputUIChannel : uint8 {
    Begin,
    PopUp,
    BackendProcess,
    Transition,
    Loading,
    Other,
    End,
};

