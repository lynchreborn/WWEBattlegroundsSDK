#pragma once
#include "CoreMinimal.h"
#include "EWWEInteractableWeaponCommentSettings.generated.h"

UENUM(BlueprintType)
enum class EWWEInteractableWeaponCommentSettings : uint8 {
    Hit,
    ThrowAndHit,
    PickUp,
    Idle,
    COUNT,
};

