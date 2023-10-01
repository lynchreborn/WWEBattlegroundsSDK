#include "WWEAction_ReceivePin.h"
#include "Net/UnrealNetwork.h"

void UWWEAction_ReceivePin::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UWWEAction_ReceivePin, bFinishPrematurelyMiniGame);
    DOREPLIFETIME(UWWEAction_ReceivePin, ExtraCountMiniGame);
}

UWWEAction_ReceivePin::UWWEAction_ReceivePin() {
    this->bFinishPrematurelyMiniGame = false;
    this->bStandUpByTime = false;
    this->bShowingPinMinigameWidget = false;
    this->TimeToStartFinalCountdown = 1.00f;
    this->ExtraCountMiniGame = 0.00f;
    this->bForceAutoStandUp = false;
    this->MinigameCountCurve = NULL;
    this->ExtraIncrementCountMiniGame = 10.00f;
    this->TimeDurationFirstSec = 1.00f;
    this->TimeDurationSecondSec = 1.00f;
    this->TimeDurationThirdSec = 1.00f;
    this->TimeDurationBellSec = 0.20f;
    this->TimeDurationEndSec = 0.01f;
    this->CommentHighHealth = 0.75f;
    this->CommentLowHealth = 0.25f;
    this->PinRival = NULL;
}

