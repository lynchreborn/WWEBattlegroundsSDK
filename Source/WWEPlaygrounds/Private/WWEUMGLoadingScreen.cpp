#include "WWEUMGLoadingScreen.h"

UWWEUMGLoadingScreen::UWWEUMGLoadingScreen() {
    this->Background = NULL;
    this->PreMatchTipDescriptionText = NULL;
    this->NormalTipDescriptionText = NULL;
    this->Spinner = NULL;
    this->Panel_DefaultBackground = NULL;
    this->Panel_CombatBackground = NULL;
    this->NormalTextPanel = NULL;
    this->CombatTextPanel = NULL;
    this->ContinuePanel = NULL;
    this->PlatformBarPanel = NULL;
    this->BlackOverlay = NULL;
    this->TimeToNextTip = 0.00f;
}

