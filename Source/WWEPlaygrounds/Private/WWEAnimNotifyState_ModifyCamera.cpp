#include "WWEAnimNotifyState_ModifyCamera.h"

UWWEAnimNotifyState_ModifyCamera::UWWEAnimNotifyState_ModifyCamera() {
    this->bModifyPitch = false;
    this->PitchOffset = 0.00f;
    this->bModifyFOV = false;
    this->FOVMultiplier = 1.00f;
    this->FOVBlendFactor = 1.00f;
    this->bModifyDistance = false;
    this->DistanceOffset = 0.00f;
    this->DistanceMultiplier = 1.00f;
    this->bModifyTarget = false;
    this->OverrideTargetAlpha = 1.00f;
    this->bModifyAngle = false;
    this->AngleOffset = 0.00f;
    this->bInterpolateAngleOffset = false;
    this->LookAtRingCenter = 0;
    this->LookAtRingCenterAlpha = 1.00f;
    this->bModifySlowMo = false;
    this->TimeDilation = 1.00f;
    this->TimeDilationBlendTime = 0.30f;
    this->bIgnoreLocationBounds = false;
    this->bResetCameraOnEnd = false;
    this->bShouldTick = false;
    this->CurrentTime = 0.00f;
    this->TotalDuration = 0.00f;
    this->InitialCameraAngle = 0.00f;
}

