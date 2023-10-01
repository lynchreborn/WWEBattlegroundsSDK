#pragma once
#include "CoreMinimal.h"
#include "EMatchCategoryType.generated.h"

UENUM(BlueprintType)
enum class EMatchCategoryType : uint8 {
    Exhibition,
    Ranked,
    Tournament,
    Challenge,
    Unranked,
    VsFriend,
};

