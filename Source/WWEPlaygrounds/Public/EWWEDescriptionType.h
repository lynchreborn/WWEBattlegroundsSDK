#pragma once
#include "CoreMinimal.h"
#include "EWWEDescriptionType.generated.h"

UENUM(BlueprintType)
enum class EWWEDescriptionType : uint8 {
    OnlyDescription,
    ValuesPercentDescription,
    ValuesDescription,
    COUNT,
};

