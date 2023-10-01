#include "WWEPagerWidget.h"

UWWEPagerWidget::UWWEPagerWidget() {
    this->Retainer = NULL;
    this->PagerSizeContainer = NULL;
    this->RetainerMaterial = NULL;
    this->InitialFold = 0.00f;
    this->TargetFold = 0.00f;
    this->AngleFold = 0.00f;
    this->AnimationSpeed = 0.00f;
    this->CurveType = EAlphaBlendOption::Linear;
    this->bPagerAnimating = false;
    this->PagerFromValue = 0.00f;
    this->PagerToValue = 0.00f;
    this->PagerScaleBox = NULL;
    this->bPageOut = false;
}

