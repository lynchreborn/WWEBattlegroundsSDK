#include "WWEAction_SimpleBase.h"

UWWEAction_SimpleBase::UWWEAction_SimpleBase() {
    this->RotateSpeed = 400.00f;
    this->bOnReachTargetCalledOnce = true;
    this->bRotationConfigured = false;
    this->bRotate = false;
    this->RotateSpeedType = EWWERotateSpeed::Walk;
    this->RotateMode = EWWERotateMode::None;
    this->CustomRotateSpeed = 0.00f;
    this->bRotateWithAnim = true;
    this->bUpdateTargetOnTick = false;
    this->bCallOnReachTargetOnce = true;
    this->bStopRotateOnReachTarget = false;
}

