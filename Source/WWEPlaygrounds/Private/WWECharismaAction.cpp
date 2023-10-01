#include "WWECharismaAction.h"

FWWECharismaAction::FWWECharismaAction() {
    this->ActionToComplete = EWWEUserProgressionCondition::Punch;
    this->CharismaToAdd = 0;
    this->bKeyAction = false;
    this->bInactivity = false;
    this->LastTimeActive = 0.00f;
}

