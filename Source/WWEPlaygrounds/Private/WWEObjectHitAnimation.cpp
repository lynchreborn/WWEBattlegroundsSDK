#include "WWEObjectHitAnimation.h"

UWWEObjectHitAnimation::UWWEObjectHitAnimation() {
    this->IsDumped = false;
    this->IsFaceUp = false;
    this->TypeObject = 0;
    this->InterestReceive = EWWEInterestFactor::High;
    this->Direction = 1;
    this->MinDistance = 0.00f;
    this->MaxDistance = 1000.00f;
}

