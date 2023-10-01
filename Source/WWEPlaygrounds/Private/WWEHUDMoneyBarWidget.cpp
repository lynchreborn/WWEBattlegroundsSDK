#include "WWEHUDMoneyBarWidget.h"

UWWEHUDMoneyBarWidget::UWWEHUDMoneyBarWidget() {
    this->HaveAllMoneyAnimation = NULL;
    this->BackgroundBar = NULL;
    this->Bar = NULL;
    this->MoneyIcon = NULL;
    this->MoneyCompleteIcon = NULL;
    this->MoneyCompleteGlow = NULL;
    this->ColorBar = NULL;
    this->CurrentMaterial = NULL;
    this->AnimationCurve = NULL;
    this->AnimationSpeed = 0.00f;
    this->MinimunValueChangeToAnimate = 0.00f;
    this->MaxValue = 0.00f;
    this->TargetValue = 0.00f;
    this->AppliedValue = 0.00f;
    this->Temp_FromValue = 0.00f;
    this->Temp_CurrentLerpValue = 0.00f;
    this->Temp_AnimatingBar = false;
}

