#include "WWETournamentTokenPopUp.h"

bool UWWETournamentTokenPopUp::PayTournamentTax(ESBPopupSceneClosingReason Cause) {
    return false;
}

void UWWETournamentTokenPopUp::OnNoHardCurrency() {
}

void UWWETournamentTokenPopUp::ConfirmationBackMsg(ESBPopupSceneClosingReason ClosingReason) {
}

UWWETournamentTokenPopUp::UWWETournamentTokenPopUp() {
    this->SoftCurrencyText = NULL;
    this->HardCurrencyText = NULL;
    this->ContinueHardCostText = NULL;
    this->ContinueSoftCostText = NULL;
    this->HardCurrencyCostBox = NULL;
    this->SoftCurrencyCostBox = NULL;
    this->RespawnCost = 0;
    this->ContinueHardCost = 0;
    this->ContinueSoftCost = 0;
    this->bPaid = false;
}

