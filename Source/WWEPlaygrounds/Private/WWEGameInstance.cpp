#include "WWEGameInstance.h"

void UWWEGameInstance::StopCurrentSequence() {
}

void UWWEGameInstance::SaveOptionsConfig(bool bCrossplayDisabled, float MusicVolumeParam, float FXVolumeParam, float VoicesParam, bool bInGameHelpDisabled) {
}

void UWWEGameInstance::OnUpdatePlayerProgressionComplete(const int32 LocalUserNum, const FString& Message, const bool bWasSuccessful) {
}

void UWWEGameInstance::OnUpdateExpiredVirtualCurrencyComplete(const FString& Message, const bool bWasSuccessful) {
}

void UWWEGameInstance::OnLoadingScreenOpen() {
}

void UWWEGameInstance::OnLoadingScreenClosed() {
}

void UWWEGameInstance::OnEditableTextBoxCloseVirtualKeyboard(const FText& Text) {
}

bool UWWEGameInstance::IsSaving() const {
    return false;
}

bool UWWEGameInstance::IsCharacterUnlocked(const FString& CharacterID) {
    return false;
}

UWWEGameInstance::UWWEGameInstance() {
    this->NakamaManager = NULL;
    this->AnalyticsManager = NULL;
    this->WorldInfoMap.AddDefaulted(1);
    this->CampaignManager = NULL;
    this->RoadToGloryManager = NULL;
    this->ProgressionManager = NULL;
    this->TournamentManager = NULL;
    this->KingOfTheRingManager = NULL;
    this->CustomCharacterManager = NULL;
    this->GameGeneralConfigManager = NULL;
    this->LocalizationBackendManager = NULL;
    this->bLogActions = true;
    this->bLoadAllStreamingLevelsAtInit = false;
    this->bLoadingCharacter = false;
    this->LevelSequencePlayer = NULL;
    this->LevelSequenceActor = NULL;
    this->LevelSequenceTargetActor = NULL;
    this->CurrentSlotIndex = 0;
    this->MaxSlots = 0;
    this->bIsWWEPostLoginComplete = false;
    this->ActiveEditableTextBox = NULL;
}

