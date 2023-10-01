#include "WWEControlsScreen.h"

void UWWEControlsScreen::ReplayFighterSong() {
}

void UWWEControlsScreen::OnControllerTypeChange(int32 ControllerIndex, ESBControllerType Type) {
}

void UWWEControlsScreen::ChangeControlsScreenRight() {
}

void UWWEControlsScreen::ChangeControlsScreenLeft() {
}

UWWEControlsScreen::UWWEControlsScreen() {
    this->CarouselHorizontalBox = NULL;
    this->CarouselIconsHorizontalBox = NULL;
    this->LeftSide = NULL;
    this->ControllerImageAndDescriptionsPanel = NULL;
    this->CombosPanel = NULL;
    this->ControllerImage = NULL;
    this->ScrollArrowTop = NULL;
    this->ScrollArrowBottom = NULL;
    this->MenuBackground = NULL;
    this->PopupBackground = NULL;
    this->CarouselIconsClass = NULL;
    this->FightingStyleWidget = NULL;
    this->LeftTriggerIcon = NULL;
    this->RightTriggerIcon = NULL;
    this->PanelsVerticalBox = NULL;
    this->ControlsCombosWidget = NULL;
    this->ControlsRatingWidget = NULL;
    this->Canvas_Controls_PC = NULL;
    this->ScrollBox_ComboInfo = NULL;
    this->ControllerDisclaimerText = NULL;
    this->StadiaPS4ControllerImage = NULL;
    this->CharacterBoxClass = NULL;
    this->CharacterBox = NULL;
    this->ScrollAnimCurve = NULL;
    this->ComboScrollSpeed = 1.00f;
    this->RightPlatformBar = NULL;
    this->AudioPlayer = NULL;
    this->TestCharacterParams = NULL;
    this->TestControllerType = ESBControllerType::None;
}

