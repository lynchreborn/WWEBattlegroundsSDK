#pragma once
#include "CoreMinimal.h"
#include "EWWEStreamingLevel.generated.h"

UENUM(BlueprintType)
enum class EWWEStreamingLevel : uint8 {
    Wrestlers,
    WrestlersShowcase,
    WrestlersDetails,
    CharacterEditor,
    PowerUps,
    KingOfTheRing,
    SkillTree,
    Controls,
};

