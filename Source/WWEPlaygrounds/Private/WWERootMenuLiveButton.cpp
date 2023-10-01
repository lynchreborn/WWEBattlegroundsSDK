#include "WWERootMenuLiveButton.h"

bool UWWERootMenuLiveButton::RequestConfigurationFile() {
    return false;
}


void UWWERootMenuLiveButton::OnNewDownloaded(bool bSuccess, UTexture2DDynamic* bigimage, UTexture2DDynamic* smallimage, TArray<uint8> BigBytes, TArray<uint8> SmallBytes, int32 Index) {
}

void UWWERootMenuLiveButton::OnDownloadNewsConfigurationFile(bool bWasSuccessful, const FString& Filename) {
}



void UWWERootMenuLiveButton::DownloadImageFailed(UTexture2DDynamic* Texture) {
}

void UWWERootMenuLiveButton::DownloadImageCompleted(UTexture2DDynamic* Texture) {
}

UWWERootMenuLiveButton::UWWERootMenuLiveButton() {
    this->Dot1 = NULL;
    this->Dot2 = NULL;
    this->Dot3 = NULL;
    this->Dot4 = NULL;
    this->Dot5 = NULL;
    this->Dot6 = NULL;
    this->Dot7 = NULL;
    this->Dot8 = NULL;
    this->Dot9 = NULL;
    this->Dot10 = NULL;
    this->New1ImagePreview = NULL;
    this->New2ImagePreview = NULL;
    this->DotOffTexture = NULL;
    this->DotOnTexture = NULL;
    this->StreamLoading = NULL;
    this->NewChangeTime = 5.00f;
    this->DownloadTask = NULL;
    this->LoadingTexture = NULL;
    this->RootMenuScreen = NULL;
    this->DownloadImageRetries = 0;
}

