#include "WWELobbyScreen.h"

void UWWELobbyScreen::ShowLobbyTutorial() {
}

void UWWELobbyScreen::ExitLobby_TransitionFinished() {
}

void UWWELobbyScreen::ExitLobby_MessageBoxClosed(ESBMessageBoxClosingReason Reason) {
}

UWWELobbyScreen::UWWELobbyScreen() {
    this->LobbySlotClass = NULL;
    this->VSWidget = NULL;
    this->SlotsPanel = NULL;
    this->Timer = NULL;
    this->UnassignedPlayersBox = NULL;
    this->OnlineInitialMessageWidget = NULL;
    this->BPLeftPlatformBar = NULL;
    this->BPRightPlatformBar = NULL;
    this->CurrentDifficulty = EPGMatchDifficultyConfigs::Rookie;
    this->bSaveDataLoaded = false;
    this->bOnTransitionToMatch = false;
}

