#include "WWECharismaActionWithParameters.h"

FWWECharismaActionWithParameters::FWWECharismaActionWithParameters() {
    this->bCanBeSuggested = false;
    this->bCanBePositive = false;
    this->MinimumCharismaToAdd = 0;
    this->MinimumTimeToCompleteAction = 0.00f;
    this->MaximumTimeToCompleteAction = 0.00f;
    this->bCanBeNegative = false;
    this->NumberOfRepetitionsToBecomeNegative = 0;
    this->MinimumCharismaToSubtract = 0;
    this->MinimumTimeToStayAfterNotBeingRepeated = 0.00f;
    this->MaximumTimeToStayAfterNotBeingRepeated = 0.00f;
    this->bIsNegative = false;
    this->NumberOfTimesRepeatedSinceNegative = 0;
}

