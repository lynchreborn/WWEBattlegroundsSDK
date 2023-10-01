#include "WWEHUDPowerUpBarWidget.h"

UWWEHUDPowerUpBarWidget::UWWEHUDPowerUpBarWidget() {
    this->Bar = NULL;
    this->BlueBar = NULL;
    this->RedBar = NULL;
    this->YellowBar = NULL;
    this->CurrentMaterial = NULL;
    this->AnimationCurve = NULL;
    this->AnimationSpeed = 0.00f;
    this->MinimunValueChangeToAnimate = 0.00f;
    this->DecreasingSound = NULL;
    this->MaxValue = 0.00f;
    this->ThresholdToRound = 0.00f;
    this->TargetValue = 0.00f;
    this->AppliedValue = 0.00f;
    this->Temp_FromValue = 0.00f;
    this->Temp_CurrentLerpValue = 0.00f;
    this->Temp_AnimatingBar = false;
    this->Mediator = NULL;
    this->BeginningIndex = 0;
}

