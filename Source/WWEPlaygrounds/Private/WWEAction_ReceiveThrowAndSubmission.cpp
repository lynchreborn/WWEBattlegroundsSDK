#include "WWEAction_ReceiveThrowAndSubmission.h"

UWWEAction_ReceiveThrowAndSubmission::UWWEAction_ReceiveThrowAndSubmission() {
    this->TotalCountMinigameNeededSpecialMatch = 40.00f;
    this->OffensiveMinInitialCountSpecialMatch = 0.25f;
    this->OffensiveMaxInitialCountSpecialMatch = 0.75f;
    this->TimeIncrementSpecialMatch = 1.00f;
    this->OffensiveIncrementSpecialMatch = 1.00f;
    this->DefensiveIncrementSpecialMatch = 1.00f;
    this->TotalCountMinigameNeeded = 40.00f;
    this->OffensiveMinInitialCount = 0.25f;
    this->OffensiveMaxInitialCount = 0.75f;
    this->TimeIncrement = 1.00f;
    this->OffensiveIncrement = 1.00f;
    this->DefensiveIncrement = 1.00f;
    this->WWESubmissionMinigameWidget = NULL;
    this->OffensiveInitialCount = 0.00f;
    this->bApplyDamageThrow = false;
    this->TimeToApplyDamage = 0.50f;
}

