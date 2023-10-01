#include "WWEAction_Grab.h"

void UWWEAction_Grab::ServerSetGrabInputAction_Implementation(EWWEInputAction _InputAction) {
}
bool UWWEAction_Grab::ServerSetGrabInputAction_Validate(EWWEInputAction _InputAction) {
    return true;
}

UWWEAction_Grab::UWWEAction_Grab() {
    this->TimeToEndGrab = 2.00f;
    this->AngleToConsiderGrabRival = 120.00f;
    this->RadiusToConsiderGrabRival = 250.00f;
    this->DistanceToRival = 340282346638528859811704183484516925440.00f;
    this->RivalGrabbed = NULL;
    this->bWantFakeGrab = false;
    this->GrabType = EWWEGrabTypes::Same;
    this->GrabVariation = 0;
    this->bOnApron = false;
    this->InputAction = EWWEInputAction::None;
}

