#pragma once
#include "CoreMinimal.h"
#include "EWWEPageNavigationState.generated.h"

UENUM()
enum class EWWEPageNavigationState : int32 {
    None,
    FirstStrip,
    LastStrip,
    NormalStrip,
    OnPage,
    COUNT,
};

