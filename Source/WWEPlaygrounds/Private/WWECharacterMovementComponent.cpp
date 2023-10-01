#include "WWECharacterMovementComponent.h"

UWWECharacterMovementComponent::UWWECharacterMovementComponent() {
    this->NetworkAutonomousToSimulatedSmoothLocationTime = 0.00f;
    this->OwnerWWECharacterGameplay = NULL;
    this->bWaitingForFirstServerMove = false;
    this->bSkipTickCharacterPose = false;
    this->bEnableRotationDuringRootMotion = false;
    this->SavedDeltaTimeForRootMotionRotation = 0.00f;
    this->bEnableRotation = false;
}

