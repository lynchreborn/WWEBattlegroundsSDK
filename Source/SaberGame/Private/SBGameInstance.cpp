#include "SBGameInstance.h"
#include "SBAudioManager.h"
#include "SBGameSettings.h"
#include "SBLobbyConfiguration.h"
#include "SBProfanityFilter.h"
#include "SBSaveGame.h"

void USBGameInstance::SetAndExecuteMapCustomProfile() {
}

void USBGameInstance::SetAndExecuteCustomProfile(const FString& _CustomProfileName) {
}

void USBGameInstance::ResetNintendoSwitchSettings() {
}

void USBGameInstance::OnChunkInstalled(uint32 ChunkId, bool bSuccess) {
}

bool USBGameInstance::IsGamepadConnected(int32 GamepadIndex) const {
    return false;
}

bool USBGameInstance::IsActivePlayerGamepadIndex(int32 GamepadIndex) const {
    return false;
}

bool USBGameInstance::HasActivePlayerGamepadIndex() const {
    return false;
}

bool USBGameInstance::GetSupportedResolutions(TArray<FIntPoint>& Resolutions) const {
    return false;
}

int32 USBGameInstance::GetSplitScreens() const {
    return 0;
}

TArray<int32> USBGameInstance::GetConnectedGamepadsIndices() const {
    return TArray<int32>();
}

int32 USBGameInstance::GetConnectedGamepads() const {
    return 0;
}

int32 USBGameInstance::GetActivePlayerGamepadIndex() const {
    return 0;
}

void USBGameInstance::EnableNintendoSwitchSettings() {
}

USBGameInstance::USBGameInstance() {
    this->GameSettings = NULL;
    this->SaveData = NULL;
    this->SceneManager = NULL;
    this->AudioManager = NULL;
    this->OnlineState = NULL;
    this->ImMatchmakingInvitee = false;
    this->Blackboard = NULL;
    this->GameSettingsClass = USBGameSettings::StaticClass();
    this->SaveDataClass = USBSaveGame::StaticClass();
    this->ActivePlayerGamepadIndex = -1;
    this->bPerformingInitialActions = false;
    this->bReturnToMainMenuOnInitialActionsCompleted = false;
    this->bWaitingToPerformInitialActionLogin = false;
    this->bCurrentlyConnected = true;
    this->LobbyConfigurationClass = USBLobbyConfiguration::StaticClass();
    this->LobbyConfiguration = NULL;
    this->ProfanityFilterClass = USBProfanityFilter::StaticClass();
    this->ProfanityFilter = NULL;
    this->bDebugUnlockComboEnabled = false;
    this->AudioManagerClass = USBAudioManager::StaticClass();
    this->ChunksNumber = 0;
    this->bCanCrossplayBeEnabled = true;
    this->bAllowCrossplayRankings = false;
}

