#pragma once
#include "CoreMinimal.h"
#include "EWWEVertexColorBodyPart.generated.h"

UENUM(BlueprintType)
enum class EWWEVertexColorBodyPart : uint8 {
    None,
    LeftHand,
    RightHand,
    COUNT,
};

