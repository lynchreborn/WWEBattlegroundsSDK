#include "WWECameraWidget.h"

UWWECameraWidget::UWWECameraWidget() {
    this->CameraFrustum = NULL;
    this->LerpSpeed = 0.00f;
    this->CurveType = EAlphaBlendOption::Linear;
    this->CustomCurve = NULL;
    this->CurrentZoom = 0.00f;
    this->InitialZoomLerp = 0.00f;
    this->TargetZoom = 0.00f;
    this->CurrentState = EWWECameraState::Idle;
    this->FrustumScaleBox = NULL;
    this->CameraFrustumSlot = NULL;
}

