#include "WWEComicPageWidget.h"

UWWEComicPageWidget::UWWEComicPageWidget() {
    this->PageContainer = NULL;
    this->Background = NULL;
    this->PageSizeContainer = NULL;
    this->CurrentPathIndex = -1;
    this->PageZoom = 0.00f;
    this->LerpSpeed = 0.00f;
    this->ZoomToApply = 0.00f;
    this->LerpSpeedToApply = 0.00f;
    this->CurvePreset = EAlphaBlendOption::Linear;
    this->CustomCurve = NULL;
    this->bUseCustomCurve = false;
    this->bItWasFinished = false;
    this->bItWasFirstStrip = false;
    this->bPageDirectBackwardTransition = false;
    this->PageNumber = 0;
    this->CurrentNavigationState = EWWEPageNavigationState::None;
    this->PreviousNavigationState = EWWEPageNavigationState::None;
}

