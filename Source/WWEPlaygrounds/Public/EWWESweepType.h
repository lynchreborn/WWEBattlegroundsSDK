#pragma once
#include "CoreMinimal.h"
#include "EWWESweepType.generated.h"

UENUM()
enum class EWWESweepType : int32 {
    None,
    MuscleWithWalls,
    SelfCapsuleWithWalls,
    RivalCapsuleWithWalls,
    MuscleWithOutsideWalls,
    SelfCapsuleWithOutsideWalls,
    RivalCapsuleWithOutsideWalls,
    SelfCapsuleWithCharacters,
    SeparatedByWall,
};

