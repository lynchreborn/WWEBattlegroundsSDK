#pragma once
#include "CoreMinimal.h"
#include "ESBHideMeshTestType.generated.h"

UENUM(BlueprintType)
enum class ESBHideMeshTestType : uint8 {
    BodyPartsIDs,
    DataFiles,
    Other,
};

