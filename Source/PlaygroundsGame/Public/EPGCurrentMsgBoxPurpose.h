#pragma once
#include "CoreMinimal.h"
#include "EPGCurrentMsgBoxPurpose.generated.h"

UENUM(BlueprintType)
enum class EPGCurrentMsgBoxPurpose : uint8 {
    NONE,
    ErrorShown,
    ExitPrompt,
    ProcessingP2P,
    COUNT,
};

