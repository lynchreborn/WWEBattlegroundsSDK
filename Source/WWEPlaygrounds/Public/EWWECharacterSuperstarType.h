#pragma once
#include "CoreMinimal.h"
#include "EWWECharacterSuperstarType.generated.h"

UENUM(BlueprintType)
enum class EWWECharacterSuperstarType : uint8 {
    Real,
    Campaign,
    UserCreated,
    COUNT,
};

