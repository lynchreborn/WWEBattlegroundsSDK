#include "SBMultiStylizedText.h"

void USBMultiStylizedText::SetTextContent(const FText& Text) {
}

USBMultiStylizedText::USBMultiStylizedText() {
    this->TextPanel = NULL;
    this->Style = NULL;
    this->Justification = ETextJustify::Left;
    this->bForceUpperCase = true;
    this->bSizeToContent = true;
    this->bAutoWrapText = false;
}

