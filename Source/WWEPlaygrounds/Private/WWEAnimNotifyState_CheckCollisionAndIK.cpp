#include "WWEAnimNotifyState_CheckCollisionAndIK.h"

UWWEAnimNotifyState_CheckCollisionAndIK::UWWEAnimNotifyState_CheckCollisionAndIK() {
    this->bCheckSocketNames = true;
    this->bModifyTimeDilation = false;
    this->bModifyPlayRate = false;
    this->Modifier = 1.00f;
    this->HowManyFrames = 1.00f;
    this->CollisionRadius = 30.00f;
    this->bCountAsDistanceHandle = true;
    this->TimeStopDuration = -1.00f;
    this->TimeStopType = EWWETimeStopOnHitType::Both;
    this->bCollideWithCapsule = false;
}

