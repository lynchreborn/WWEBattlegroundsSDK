#include "WWECounteractAction.h"

UWWECounteractAction::UWWECounteractAction() {
    this->bIsGrabParry = false;
    this->bIsClimbing = false;
    this->Direction = EWWEDirection::None;
    this->bIsApron = false;
    this->bApronToOutside = false;
    this->bTowardOutApronPositionLeft = false;
    this->bIsOnTurnbuckle = false;
}

