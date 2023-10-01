#pragma once
#include "CoreMinimal.h"
#include "ECatalogCategory.generated.h"

UENUM(BlueprintType)
enum class ECatalogCategory : uint8 {
    Internal,
    External,
    Featured,
};

