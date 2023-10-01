#include "SBBasicSlot.h"

void USBBasicSlot::SetTextOpacityAndColor(const FLinearColor& InColorAndOpacity) {
}

void USBBasicSlot::SetText(const FText& NewText) {
}

void USBBasicSlot::SetOutlineOpacityAndColor(const FLinearColor& InColorAndOpacity) {
}

void USBBasicSlot::SetIcon(UTexture2D* NewIcon) {
}

FLinearColor USBBasicSlot::GetTextOpacityAndColor() {
    return FLinearColor{};
}

FText USBBasicSlot::GetText() {
    return FText::GetEmpty();
}

FLinearColor USBBasicSlot::GetOutlineOpacityAndColor() {
    return FLinearColor{};
}

UTexture2D* USBBasicSlot::GetIcon() {
    return NULL;
}

USBBasicSlot::USBBasicSlot() {
    this->InitialIcon = NULL;
    this->IconImage = NULL;
    this->TextWidget = NULL;
}

