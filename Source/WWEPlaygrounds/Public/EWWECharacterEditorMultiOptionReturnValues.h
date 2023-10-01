#pragma once
#include "CoreMinimal.h"
#include "EWWECharacterEditorMultiOptionReturnValues.generated.h"

UENUM(BlueprintType)
enum class EWWECharacterEditorMultiOptionReturnValues : uint8 {
    NO_OPTION,
    EXIT_AND_SAVE,
    EXIT_NO_SAVE,
    NO_EXIT,
    COUNT,
};

