#pragma once
#include "CoreMinimal.h"
#include "EWWEPowerUpType.generated.h"

UENUM(BlueprintType)
enum class EWWEPowerUpType : uint8 {
    None,
    IronFist,
    StoneWall,
    DamageReflection,
    StaminaDrain,
    SuperComboAttack,
    Immunity,
    SuperRegeneration,
    PowerPin,
    WeaponMaster,
    PerfectSkill,
    PerfectThrow,
    EnergyThief,
    DrillingAttacks,
    Curse,
    SuperHealing,
    Earthquake,
    IceBreath,
    GodOfThunder,
    COUNT,
};

