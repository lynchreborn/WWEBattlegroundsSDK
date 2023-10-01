#include "WWEAction_ReceiveSubmission.h"
#include "Net/UnrealNetwork.h"

void UWWEAction_ReceiveSubmission::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UWWEAction_ReceiveSubmission, bFinishSuccessfullyMiniGame);
}

UWWEAction_ReceiveSubmission::UWWEAction_ReceiveSubmission() {
    this->bHasLostMinigame = false;
    this->bFinishSuccessfullyMiniGame = false;
    this->SectionsRemaining = 0;
    this->bStandUpByTime = false;
    this->TimeToStartFinalCountdown = 1.00f;
    this->TotalCountMinigameNeededSpecialMatch = 40.00f;
    this->OffensiveMinInitialCountSpecialMatch = 0.50f;
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
    this->OffensiveInitialCount = 0.50f;
    this->WWESubmissionMinigameWidget = NULL;
    this->_SubmissionRival = NULL;
    this->SubmissionSections = 1;
    this->TimeDurationSubmission = 5.00f;
    this->TimeToApplyDamage = 0.50f;
}

