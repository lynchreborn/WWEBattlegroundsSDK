#pragma once
#include "CoreMinimal.h"
#include "EPGCrowdBodyPartGender.generated.h"

UENUM(BlueprintType)
enum class EPGCrowdBodyPartGender : uint8 {
    MALE,
    FEMALE,
    ANY,
};

