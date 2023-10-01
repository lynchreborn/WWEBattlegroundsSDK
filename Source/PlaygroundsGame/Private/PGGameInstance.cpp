#include "PGGameInstance.h"

void UPGGameInstance::SaveGameData() {
}

bool UPGGameInstance::PurchaseItem(TScriptInterface<ISBItemParametersInterface> ItemParams, bool bWithHardCurrency, uint32 Amount) {
    return false;
}

void UPGGameInstance::OnSaveGameWillBeDeletedMsgBoxClosed() {
}

void UPGGameInstance::LoadGameData() {
}

void UPGGameInstance::InitOnlineGameShop() {
}

void UPGGameInstance::EnableClothingSimulation(bool _bEnableClothingSimulation) {
}

void UPGGameInstance::CheckPlayerNameCollissions() {
}

UPGGameInstance::UPGGameInstance() {
    this->PendingPresenceCheckRate = 1.00f;
    this->bUsingLocalDailyQuests = false;
    this->WorldInfoFileName = TEXT("WI.sf");
    this->ServerWorldInfoFileName = TEXT("WI.sf");
    this->BalancePatchFileBackendFormat = TEXT("patch__{0}_{1}");
    this->BalancePatchFileNameTemplate = TEXT("BP{0}T{1}.sf");
    this->BalancePatchSaveGameName = TEXT("WWEBalanceConfig");
    this->bPlatformLoginSuccessful = false;
    this->bBlockSaveData = false;
    this->bIsSaving = false;
    this->bExtraSavingPending = false;
    this->bCouldNotLoadSaveData = false;
    this->TimeInSecondsToUpdateWorldInfoInServer = 28800.00f;
    this->bRequireOnlineSignInToPlay = false;
    this->bIgnoreOnlineSignInErrors = false;
    this->bDebugAllowLoginWithOnlineSubsystemNull = false;
    this->bCurrentlyReachable = true;
    this->_CachedSeasonManager = NULL;
    this->bActivePlayerIsLogginOut = false;
    this->OnlineGameShop = NULL;
    this->EulaVersionFileName = TEXT("EV.sf");
    this->GDPRInfoFileName = TEXT("GDPR.sf");
}

