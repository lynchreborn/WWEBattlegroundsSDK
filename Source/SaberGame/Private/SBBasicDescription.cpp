#include "SBBasicDescription.h"

void USBBasicDescription::SetTitleText(const FText& NewText) {
}

void USBBasicDescription::SetTitleLocalizedText(const FString& TableId, const FString& KeyId) {
}

void USBBasicDescription::SetDescriptionText(const FText& NewText) {
}

void USBBasicDescription::SetDescriptionLocalizedText(const FString& TableId, const FString& KeyId) {
}

USBBasicDescription::USBBasicDescription() {
    this->TitleBlock = NULL;
    this->DescriptionBlock = NULL;
}

