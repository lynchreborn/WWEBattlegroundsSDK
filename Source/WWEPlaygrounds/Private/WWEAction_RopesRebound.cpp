#include "WWEAction_RopesRebound.h"

UWWEAction_RopesRebound::UWWEAction_RopesRebound() {
    this->RadiusCheck = 70.00f;
    this->PreDistanceSquared = 0.00f;
    this->PreDegrees = 0.00f;
    this->bPreClockwiseAngle = false;
    this->PreCharacterDirection = EWWEDirection::None;
    this->CurrentNearRingWall = EWWEDirection::None;
    this->RemainingSprintTimeAfterRebound = 0.00f;
    this->bWantsToRebound = false;
}

