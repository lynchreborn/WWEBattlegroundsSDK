#pragma once
#include "CoreMinimal.h"
#include "EWWESequenceFollowType.generated.h"

UENUM(BlueprintType)
enum class EWWESequenceFollowType : uint8 {
    LookAtAllCharacters,
    LookAtOneCharacter,
    RelativeToOneCharacter,
    COUNT,
};

