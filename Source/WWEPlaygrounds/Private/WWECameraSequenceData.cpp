#include "WWECameraSequenceData.h"

FWWECameraSequenceData::FWWECameraSequenceData() {
    this->Weight = 0.00f;
    this->FitType = EWWECameraSequenceDurationFitType::AutoFit;
    this->FitDuration = 0.00f;
    this->AllowedZone = EWWECameraSequenceArea::Anywhere;
    this->DistanceFromWall = 0.00f;
    this->bOnlySingleLocalPlayer = false;
}

