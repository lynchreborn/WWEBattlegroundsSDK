#pragma once
#include "CoreMinimal.h"
#include "EWWEInteractableWeaponAngularVelocitySettings.generated.h"

UENUM(BlueprintType)
enum class EWWEInteractableWeaponAngularVelocitySettings : uint8 {
    UsePhysics,
    Override,
    Add,
    COUNT,
};

