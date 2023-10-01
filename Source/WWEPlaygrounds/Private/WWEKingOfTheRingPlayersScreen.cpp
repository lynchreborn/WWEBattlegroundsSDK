#include "WWEKingOfTheRingPlayersScreen.h"

void UWWEKingOfTheRingPlayersScreen::RelocateWaitingPlayerSlots() {
}

void UWWEKingOfTheRingPlayersScreen::OnTutorialPopupClosed(ESBPopupSceneClosingReason Reason) {
}

void UWWEKingOfTheRingPlayersScreen::OnScreenTransitionEnds() {
}

UWWEKingOfTheRingPlayersScreen::UWWEKingOfTheRingPlayersScreen() {
    this->OnRingPlayerStats1 = NULL;
    this->OnRingPlayerStats2 = NULL;
    this->OnRingPlayerStats3 = NULL;
    this->OnRingPlayerStats4 = NULL;
    this->WaitingPlayerStats1 = NULL;
    this->WaitingPlayerStats2 = NULL;
    this->WaitingPlayerStats3 = NULL;
    this->WaitingPlayerStats4 = NULL;
    this->PlayersCanvas = NULL;
}

