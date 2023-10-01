#include "WWECombatResultsScreen.h"

void UWWECombatResultsScreen::WaitAndGoNextState(int32 WaitTime) {
}

void UWWECombatResultsScreen::SetState(EWWECombatResultsState NextState) {
}

void UWWECombatResultsScreen::OnAppFocusReceived() {
}

void UWWECombatResultsScreen::GoNextState() {
}

void UWWECombatResultsScreen::GetAndUpdateNumberAndTypeOfPlayers() {
}

void UWWECombatResultsScreen::ClearTimerHandles() {
}

UWWECombatResultsScreen::UWWECombatResultsScreen() {
    this->SlotsPanel = NULL;
    this->VSWidget = NULL;
    this->HideScreenAnim = NULL;
    this->ShowScreenAnim = NULL;
    this->EndButtons = NULL;
    this->CurrentState = EWWECombatResultsState::InitialState;
    this->TimeToNextState[0] = 0.00f;
    this->TimeToNextState[1] = 0.00f;
    this->TimeToNextState[2] = 0.00f;
}

