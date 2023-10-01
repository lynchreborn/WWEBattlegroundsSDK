#include "WWETopRopesAction.h"

UWWETopRopesAction::UWWETopRopesAction() {
    this->bIsDumped = false;
    this->MinDistance = 0.00f;
    this->MaxDistance = 9999.00f;
    this->bIsFailed = false;
    this->InterestDone = EWWEInterestFactor::High;
    this->bIsThrowVariation = false;
    this->bToOutside = false;
}

