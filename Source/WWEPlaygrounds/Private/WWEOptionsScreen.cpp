#include "WWEOptionsScreen.h"

void UWWEOptionsScreen::VoicesVolumeChanged() {
}

void UWWEOptionsScreen::UpdateArrows(float CurrentOffset) {
}

void UWWEOptionsScreen::TermsSelected() {
}

void UWWEOptionsScreen::ShowTermsButton() {
}

void UWWEOptionsScreen::ShowSelectButton() {
}

void UWWEOptionsScreen::ShowApplyButton() {
}

void UWWEOptionsScreen::SetSoundEnabled(bool bSoundEnabled) {
}

void UWWEOptionsScreen::SetOptionsFocusEnabled(bool bOptionsFocusEnabled) {
}

void UWWEOptionsScreen::SelectorChanged() {
}

void UWWEOptionsScreen::ScreenTypeChanged() {
}

void UWWEOptionsScreen::ResolutionChanged() {
}

void UWWEOptionsScreen::OnEULAMsgBoxConfirmationClosed(ESBMessageBoxClosingReason Reason) {
}

void UWWEOptionsScreen::OnDataProtectionMsgBoxConfirmationClosed(ESBMessageBoxClosingReason Reason) {
}

void UWWEOptionsScreen::OnCreditsMsgBoxConfirmationClosed(ESBMessageBoxClosingReason Reason) {
}

void UWWEOptionsScreen::OnControlsMsgBoxConfirmationClosed(ESBMessageBoxClosingReason Reason) {
}

void UWWEOptionsScreen::OnBackMsgBoxConfirmationClosed(ESBMessageBoxClosingReason Reason) {
}

void UWWEOptionsScreen::MusicVolumeChanged() {
}

void UWWEOptionsScreen::HideTermsButton() {
}

void UWWEOptionsScreen::HideSelectButton() {
}

void UWWEOptionsScreen::HideCreditsButton() {
}

void UWWEOptionsScreen::HideApplyButton() {
}

void UWWEOptionsScreen::GraphicsChanged() {
}

UWidget* UWWEOptionsScreen::GetNextNavigableWidgetUp() {
    return NULL;
}

UWidget* UWWEOptionsScreen::GetNextNavigableWidgetDown() {
    return NULL;
}

UWidget* UWWEOptionsScreen::GetNextNavigableWidget(EUINavigation NavigationDirection) {
    return NULL;
}

void UWWEOptionsScreen::CreditsSelected() {
}

void UWWEOptionsScreen::ControlsSelected() {
}

void UWWEOptionsScreen::AudioFXVolumeChanged() {
}

UWWEOptionsScreen::UWWEOptionsScreen() {
    this->OptionSelectorCrossplay = NULL;
    this->OptionSelectorMusic = NULL;
    this->OptionSelectorAudioFX = NULL;
    this->OptionSelectorVoices = NULL;
    this->OptionSelectorInGameHelp = NULL;
    this->OptionSelectorResolution = NULL;
    this->ResolutionSpacer = NULL;
    this->OptionSelectorScreenType = NULL;
    this->ScreenTypeSpacer = NULL;
    this->OptionSelectorGraphics = NULL;
    this->GraphicsSpacer = NULL;
    this->OptionSelectorControls = NULL;
    this->OptionSelectorCredits = NULL;
    this->OptionSelectorsVerticalBox = NULL;
    this->LeftPlatformBar = NULL;
    this->RightPlatformBar = NULL;
    this->MenuBackground = NULL;
    this->PopupBackground = NULL;
    this->BuildNumber = NULL;
    this->ScrollBox_Options = NULL;
    this->ArrowUp = NULL;
    this->ArrowDown = NULL;
    this->PlayerUniqueId = NULL;
    this->OnApplySoundCue = NULL;
    this->CurrentWidgetIndex = 0;
    this->TotalWidgetCount = 0;
    this->InScreenWidgetCount = 7;
}

