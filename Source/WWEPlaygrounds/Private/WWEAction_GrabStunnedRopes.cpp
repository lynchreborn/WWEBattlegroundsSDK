#include "WWEAction_GrabStunnedRopes.h"

UWWEAction_GrabStunnedRopes::UWWEAction_GrabStunnedRopes() {
    this->bWantFatalityVariation = false;
    this->PercentageHPToPerformFatalityVariation = 0.20f;
    this->Side = EWWEDirection::None;
}

