#include "WWETargetRivalWidget.h"

void UWWETargetRivalWidget::OnFadeOutImage() {
}

void UWWETargetRivalWidget::OnFadeInImage() {
}

UWWETargetRivalWidget::UWWETargetRivalWidget() {
    this->Duration = 1.00f;
    this->FadeInImage = NULL;
    this->FadeOutImage = NULL;
    this->InstantOutImage = NULL;
    this->RivalName = NULL;
    this->RivalPortrait = NULL;
    this->RemainingSeconds = -1.00f;
}

