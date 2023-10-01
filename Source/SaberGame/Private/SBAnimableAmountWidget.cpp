#include "SBAnimableAmountWidget.h"




USBAnimableAmountWidget::USBAnimableAmountWidget() {
    this->AmountBlock = NULL;
    this->AmountToAddBlock = NULL;
    this->XPLabelBlock = NULL;
    this->bEnableAmountToAdd = false;
    this->bSetAmountAsNumber = false;
    this->ScalingAnimationCurve = NULL;
    this->ScalingAnimationNumberOfCycles = 0.00f;
    this->bEnableAmountScale = false;
    this->bEnableAmountToAddScale = false;
    this->bEnableAmountColor = false;
    this->bEnableAmountToAddColor = false;
    this->AnimationTimer = 0.00f;
    this->AnimationDuration = 0.00f;
    this->bIsAnimating = false;
    this->InitialValue = 0;
    this->TargetValue = 0;
    this->CurrentValue = 0;
}

