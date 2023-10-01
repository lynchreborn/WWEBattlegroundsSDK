#pragma once
#include "CoreMinimal.h"
#include "EWWEActionTypes.generated.h"

UENUM(BlueprintType)
enum class EWWEActionTypes : uint8 {
    None,
    Pin,
    Minigame,
    ActionTypeOne,
    ActionTypeTwo,
    ActionTypeThree,
    ActionTypeFour,
    PickUp,
    PickWeaponUnderRing,
    SignatureMove,
    LevelEventInteract,
    Finisher,
    JumpOffHelicopter,
    ForbiddenCounter,
    R1,
    L1,
    R2,
    L2,
    MinigameAxisLeft,
    MinigameAxisRight,
    CarryCharacter,
    Taunt,
    COUNT,
};

