#include "SBVideoDisplayWidget.h"

void USBVideoDisplayWidget::OnVideoSupended() {
}

void USBVideoDisplayWidget::OnVideoResumed() {
}

void USBVideoDisplayWidget::OnVideoOpenedFailed(const FString& InFailedUrl) {
}

void USBVideoDisplayWidget::OnVideoOpened(const FString& InOpenedUrl) {
}

void USBVideoDisplayWidget::OnVideoFinished() {
}

void USBVideoDisplayWidget::OnVideoClosed() {
}

USBVideoDisplayWidget::USBVideoDisplayWidget() {
    this->DefaultContentUIHandler = NULL;
    this->VideoTexture = NULL;
    this->SubtitlesWidget = NULL;
    this->SoundComponent = NULL;
    this->SoundClass = NULL;
    this->VideoPlayer = NULL;
    this->SourceSubtitles = NULL;
    this->PreviousMusicVolume = 0.00f;
    this->OriginalPreviousMusicVolume = 0.00f;
    this->CurrentDisplayState = ESBVideoDiplayStates::Initializing;
    this->bEnableSubtitles = false;
    this->CurrentVideoItem = NULL;
}

