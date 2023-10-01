#include "WWEHUDMinigameButtonPress.h"

void UWWEHUDMinigameButtonPress::DisableMinigame() {
}

UWWEHUDMinigameButtonPress::UWWEHUDMinigameButtonPress() {
    this->DisableEndTime = 0.00f;
    this->ButtonAnimationPlaybackSpeed = 0.00f;
    this->ButtonAnimation = NULL;
    this->PlayerOneBlinkAnimation = NULL;
    this->PlayerTwoBlinkAnimation = NULL;
    this->ProgressBar = NULL;
    this->CharacterNameLeft = NULL;
    this->CharacterNameLeft_Yellow = NULL;
    this->CharacterNameRight = NULL;
    this->CharacterNameRight_Yellow = NULL;
    this->KeyboardActionButtonPanel = NULL;
    this->ActionButtonPanel = NULL;
    this->CharismaIconLeft = NULL;
    this->PlayerOneCharacter = NULL;
    this->PlayerTwoCharacter = NULL;
    this->ProgressBarMaterial = NULL;
    this->CountMinigamePlayerOne = 0.00f;
    this->CountMinigamePlayerTwo = 0.00f;
    this->CurrentCountMinigamePlayerOne = 0.00f;
    this->CurrentCountMinigamePlayerTwo = 0.00f;
    this->bIsPlayingEndAnimation = false;
    this->bAlternateActionButton = false;
    this->TimeForAlternateActionButton = 0.00f;
}

