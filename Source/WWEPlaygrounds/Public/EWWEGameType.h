#pragma once
#include "CoreMinimal.h"
#include "EWWEGameType.generated.h"

UENUM(BlueprintType)
enum class EWWEGameType : uint8 {
    None,
    Exhibition,
    Campaign,
    KingOfTheRing,
    Tournament,
    COUNT,
};

