#include "WWEAction_Hit.h"

UWWEAction_Hit::UWWEAction_Hit() {
    this->ComboHeight = EWWEActionHeight::None;
    this->ComboHitCounter = 0;
    this->MaxComboHitCounter = 2;
    this->bLastHitSuccess = false;
    this->bSelectedApronStrongHit = false;
    this->bHitApronRival = false;
    this->bFromOutRing = false;
    this->PercentageOfTimeToEnqueAction = 0.50f;
    this->TimeToResetHitCombo = 0.30f;
    this->DistToPerformStrongHitOnApron = 110.00f;
    this->MinDistanceToHitApronRival = 110.00f;
    this->MaxAngleHitFromOutRing = 60.00f;
    this->MaxDistanceHitFromOutRing = 220.00f;
    this->OnStartActionRequestCombinationMode = EWWECombinationList::None;
    this->CombinationMode = EWWECombinationList::None;
}

