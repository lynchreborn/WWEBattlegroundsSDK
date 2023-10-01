#pragma once
#include "CoreMinimal.h"
#include "EConfigurationMode.generated.h"

UENUM()
enum class EConfigurationMode : int32 {
    Editable,
    NoEditable,
};

