#include "WWEAction_TopRopes.h"

UWWEAction_TopRopes::UWWEAction_TopRopes() {
    this->DifferenceToJumpOnRivalOutsideOfRing = 200.00f;
    this->TrackingRatio = 0.00f;
    this->ForceActorToOrientation = NULL;
    this->DistanceToRival = 340282346638528859811704183484516925440.00f;
    this->VelocityAdjustLocation = 0.00f;
    this->VariationTopRopes = -1;
    this->bWasRivalOnRing = false;
    this->bIsFailedVariation = false;
    this->bIsThrowVariation = false;
    this->bHitSuccess = false;
    this->bIsFacingToRing = false;
    this->bTopRopesRequested = false;
}

