#include "WWEHUDCombatScreen.h"

void UWWEHUDCombatScreen::HideInGameButton(EWWEActionTypes Action, const AActor* OwnerCharacter) {
}

void UWWEHUDCombatScreen::HideInGameAllButtons() {
}

UWWEHUDCombatScreen::UWWEHUDCombatScreen() {
    this->HideHUDAnimation = NULL;
    this->ShowHUDAnimation = NULL;
    this->HideCountdownDelay = 0.50f;
    this->IngameButtonPanel = NULL;
    this->TargetRivalPanel = NULL;
    this->PinMinigamePanel = NULL;
    this->HUDMinigamePressPanel = NULL;
    this->NextRivalWidget = NULL;
    this->RivalsCounterWidget = NULL;
    this->PowerUpHUDWidget = NULL;
    this->Countdown = NULL;
    this->MoneyHUDWidget = NULL;
    this->OutOfRingCountDown = NULL;
    this->HUDKingOfTheRingWidget = NULL;
    this->ChallengeMessage = NULL;
    this->FameObjectiveWidget = NULL;
    this->FadeOutHud = NULL;
    this->FadeInHud = NULL;
}

