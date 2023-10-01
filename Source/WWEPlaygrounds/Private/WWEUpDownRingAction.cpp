#include "WWEUpDownRingAction.h"

UWWEUpDownRingAction::UWWEUpDownRingAction() {
    this->bIsUpRing = false;
    this->bIsFaceToTurnbuckle = false;
    this->bIsRingDestroyed = false;
    this->bDumpAfterUpDownRing = false;
    this->ObjectType = EWWETypeObjects::None;
}

