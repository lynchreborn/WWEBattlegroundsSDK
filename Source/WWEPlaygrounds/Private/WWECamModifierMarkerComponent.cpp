#include "WWECamModifierMarkerComponent.h"

UWWECamModifierMarkerComponent::UWWECamModifierMarkerComponent() {
    this->bModifyPitch = false;
    this->PitchOffset = 0.00f;
    this->bModifyDistance = false;
    this->DistanceOffset = 0.00f;
    this->DistanceMultiplier = 1.00f;
    this->bModifyAngle = false;
    this->AngleOffset = 0.00f;
}

