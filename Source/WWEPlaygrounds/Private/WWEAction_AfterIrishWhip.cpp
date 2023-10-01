#include "WWEAction_AfterIrishWhip.h"

UWWEAction_AfterIrishWhip::UWWEAction_AfterIrishWhip() {
    this->DistanceToPerform = 500.00f;
    this->DistanceToRival = 340282346638528859811704183484516925440.00f;
    this->bAfterIrishRequested = false;
    this->Direction = EWWEDirection::None;
    this->ComboHeight = EWWEActionHeight::None;
    this->CombinationMode = EWWECombinationList::None;
}

