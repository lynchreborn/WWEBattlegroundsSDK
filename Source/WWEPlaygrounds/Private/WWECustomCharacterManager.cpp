#include "WWECustomCharacterManager.h"

void UWWECustomCharacterManager::GetUploadedContentUrl(const FString& UploadedContent, UWWECharacterParameters* CustomCharacterParameter) {
}

UWWECustomCharacterManager::UWWECustomCharacterManager() {
    this->CurrentSlotID = 0;
    this->bOnlineTitleIsBussy = false;
    this->bCurrentCharacterNeedsUpdate = false;
}

