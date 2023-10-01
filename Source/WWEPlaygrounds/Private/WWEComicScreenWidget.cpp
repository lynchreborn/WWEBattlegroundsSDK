#include "WWEComicScreenWidget.h"

UWWEComicScreenWidget::UWWEComicScreenWidget() {
    this->NextButtonIcon = NULL;
    this->PreviousButtonIcon = NULL;
    this->NextPageButtonIcon = NULL;
    this->PreviousPageButtonIcon = NULL;
    this->PreviousBackgroundIcon = NULL;
    this->NextBackgroundIcon = NULL;
    this->PreviousPageBackgroundIcon = NULL;
    this->NextPageBackgroundIcon = NULL;
    this->NextImageIcon = NULL;
    this->PreviousImageIcon = NULL;
    this->NextPageImageIcon = NULL;
    this->PreviousPageImageIcon = NULL;
    this->SkipButton = NULL;
    this->SkipButtonBackground = NULL;
    this->CameraWidget = NULL;
    this->Pager = NULL;
    this->LeftButtons = NULL;
    this->DefaultContentUIHandler = NULL;
    this->CurrentComicPage = NULL;
    this->MusicVolume = 1.00f;
    this->CurrentComic = NULL;
    this->CurrentScreenState = EWWEComicScreenStates::None;
    this->bDirectNextPage = false;
    this->bDirecPreviousPage = false;
}

