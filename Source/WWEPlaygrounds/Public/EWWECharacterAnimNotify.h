#pragma once
#include "CoreMinimal.h"
#include "EWWECharacterAnimNotify.generated.h"

UENUM(BlueprintType)
enum class EWWECharacterAnimNotify : uint8 {
    None,
    Dumped,
    MovementModeFly,
    MovementModeWalk,
    MovementModeFalling,
    AddForceTurnbuckle,
    DEBUG_IdentifyAnimation,
    PickUp_Attach,
    Release_Detach,
    ThrowWeapon_Detach,
    SetWeaponSockets,
    ReceivePin,
    SetAverageDynamicScaleToThisAndRivalCharacters,
    ActivePowerUp,
    Hit,
    ReceiveSubmission,
    TurnbuckleMinigameAction,
    DecreaseCollisionRadius,
    ResetCollisionRadius,
    SpawnOwnSpecialWeapon,
    StandUpStunned,
    COUNT,
};

