#include "WWEAnimInstanceGameplay.h"

UWWEAnimInstanceGameplay::UWWEAnimInstanceGameplay() {
    this->Speed = 0.00f;
    this->SpeedOnApron = 0.00f;
    this->bIsAccelerating = false;
    this->bIsAcceleratingAndCarry = false;
    this->OrientationAngle = 0.00f;
    this->bIsStopped = false;
    this->CurrentAction = NULL;
    this->CurrentOrderID = 0;
    this->PreviousAction = NULL;
    this->ScaledPlayRate = 1.00f;
    this->PlayRateMultiplierNormal = 1.00f;
    this->PlayRateMultiplierSprint = 1.00f;
    this->PlayRateMultiplierAfterReboundSprint = 1.00f;
    this->PlayRateMultiplierApron = 1.00f;
    this->PlayRateMultiplierCageTop = 1.00f;
    this->PlayRateMultiplierIrishWhipSprint = 1.00f;
    this->PlayRateMultiplierCarryingHeavyWeapon = 1.00f;
    this->PlayRateMultiplierCarryingOtherCharacter = 1.00f;
    this->bIsMale = true;
}

