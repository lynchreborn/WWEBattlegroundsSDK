#include "WWEKingOfRingLobbyScreen.h"

void UWWEKingOfRingLobbyScreen::OnTutorialPopupClosed(ESBPopupSceneClosingReason Reason) {
}

void UWWEKingOfRingLobbyScreen::OnScreenTransitionEnds() {
}

UWWEKingOfRingLobbyScreen::UWWEKingOfRingLobbyScreen() {
    this->KOTRPlayerStats = NULL;
    this->LobbySlot = NULL;
    this->FirstConfigureScreenDone = false;
    this->bCanceledLobbyScreen = false;
    this->bInsideLobby = false;
    this->MMAudioPlayer = NULL;
    this->MMSound = NULL;
}

