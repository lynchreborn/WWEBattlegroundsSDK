#pragma once
#include "CoreMinimal.h"
#include "EWWECommentType.generated.h"

UENUM(BlueprintType)
enum class EWWECommentType : uint8 {
    Default,
    MatchType,
    Map,
    Character,
    COUNT,
};

