#include "WWEBreakBlockAnimation.h"

UWWEBreakBlockAnimation::UWWEBreakBlockAnimation() {
    this->PowerAction = EWWEPowerAction::Soft;
    this->bIsClimbing = false;
    this->Direction = EWWEDirection::None;
    this->bIsApron = false;
    this->bApronToOutside = false;
    this->bTowardOutApronPositionLeft = false;
}

