#include "WWEAction_Throw.h"

UWWEAction_Throw::UWWEAction_Throw() {
    this->StartBodyPartGrabbed = EWWEGrabBodyPart::None;
    this->bSkipDistanceCheck = true;
    this->bStunnedAfterIrishWhipToTurnbuckleLookingToCenterRing = false;
    this->PreselectedVariation = -1;
    this->bIrishThrowRequested = false;
    this->ThrowType = EWWEThrowType::Regular;
    this->MaxDistanceForComboThrow = 135.00f;
    this->MaxDistanceToTryIrishThrow = 180.00f;
    this->MaxDistanceToTryFenceThrow = 150.00f;
    this->MaxDistanceToTryApronToRingThrow = 150.00f;
    this->MaxDistanceToTryApronToApronThrow = 110.00f;
    this->MaxDistanceToTryApronThrowToTurnbuckle = 3.00f;
    this->MaxDistanceToTryThrowToApron = 150.00f;
    this->SecurityDistanceOffset = 20.00f;
    this->CombinationMode = EWWECombinationList::None;
    this->bMustReceiveDamage = false;
    this->bWasPerformedSuccessfully = false;
}

