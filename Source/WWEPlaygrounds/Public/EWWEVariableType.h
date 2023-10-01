#pragma once
#include "CoreMinimal.h"
#include "EWWEVariableType.generated.h"

UENUM(BlueprintType)
enum class EWWEVariableType : uint8 {
    None,
    Int32,
    Float,
    FString,
    SpecialType,
    COUNT,
};

