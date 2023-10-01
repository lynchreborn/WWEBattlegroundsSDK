#include "WWERootMenuScreen.h"

void UWWERootMenuScreen::OnTutorialPopupClosed(ESBPopupSceneClosingReason Reason) {
}

void UWWERootMenuScreen::OnCancelNews() {
}

UWWERootMenuScreen::UWWERootMenuScreen() {
    this->Retainer = NULL;
    this->RetainerMaterial = NULL;
    this->StickerInitialFold = 0.00f;
    this->StickerTargetFold = 0.00f;
    this->StickerAngle = 0.00f;
    this->StickerAnimationDuration = 0.00f;
    this->CodesScreen = NULL;
    this->OnTransitionInSoundCue = NULL;
    this->OnTransitionOutSoundCue = NULL;
    this->Temp_CurrentStickerAnimTime = 0.00f;
    this->bTemp_Animating = false;
    this->Temp_StickerFromValue = 0.00f;
    this->Temp_StickerToValue = 0.00f;
    this->OnNewsSection = false;
    this->SwitchIsVisible = ESlateVisibility::Visible;
    this->CancelIsVisible = ESlateVisibility::Visible;
    this->CodeLockerIsVisible = ESlateVisibility::Visible;
    this->CheckIsVisible = ESlateVisibility::Visible;
    this->PreviousIsVisible = ESlateVisibility::Visible;
    this->NextIsVisible = ESlateVisibility::Visible;
    this->OpenSessionIsVisible = ESlateVisibility::Visible;
    this->OptionsIsVisible = ESlateVisibility::Visible;
    this->AcceptIsVisible = ESlateVisibility::Visible;
    this->bCheckShowTutorial = false;
}

