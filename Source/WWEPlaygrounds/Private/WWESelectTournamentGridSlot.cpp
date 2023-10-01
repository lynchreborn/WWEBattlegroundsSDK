#include "WWESelectTournamentGridSlot.h"

void UWWESelectTournamentGridSlot::SaveImageCompleted(bool bWasSuccessful, const FString& Filename) {
}

void UWWESelectTournamentGridSlot::OnFinishInscription(ESBPopupSceneClosingReason ClosingReason) {
}



void UWWESelectTournamentGridSlot::LoadImageCompleted(bool bWasSuccessful, TArray<uint8>& Result, const FString& Filename) {
}

void UWWESelectTournamentGridSlot::DownloadImageCompleted(bool bWasSuccessful, const FString& Filename) {
}

void UWWESelectTournamentGridSlot::ConfirmationPayCompletedTournament(ESBMessageBoxClosingReason Cause) {
}

UWWESelectTournamentGridSlot::UWWESelectTournamentGridSlot() {
    this->ComingSoonUnselectedMaterial = NULL;
    this->ComingSoonSelectedMaterial = NULL;
    this->TimeCanvas = NULL;
    this->LockCanvas = NULL;
    this->SoftCurrencyBox = NULL;
    this->SoftCurrencyText = NULL;
    this->HardCurrencyText = NULL;
    this->HardCurrencyBox = NULL;
    this->TimeToEnd = NULL;
    this->LoadingPanel = NULL;
    this->bActiveTournament = false;
    this->bCurrentlyInside = false;
    this->CachedZOrder = 0;
    this->OwnerGrid = NULL;
    this->bIsSlotActive = false;
    this->bTimeRemainingExpired = false;
}

