#include "WWEHitAction.h"

UWWEHitAction::UWWEHitAction() {
    this->ComboHeight = EWWEActionHeight::Top;
    this->InterestDone = EWWEInterestFactor::Mid;
    this->bWithObject = false;
    this->ObjectType = EWWETypeObjects::None;
    this->bIsOnApron = false;
    this->bApronStrongHit = false;
    this->bFaceRing = false;
    this->bRightPosition = false;
    this->bIsTargetOnApron = false;
    this->bIsTargetOnApronLeft = false;
    this->bIsTargetOnTurnbuckleRelevant = true;
    this->bTargetOnTurnbuckle = false;
    this->bIsOnTurnbuckle = false;
    this->bUsedOnlyOnFixedComboPosition = false;
    this->FixedComboPosition = 0;
    this->bFromOutRing = false;
}

