#include "SBMenuGridElement.h"

void USBMenuGridElement::SetZOrder(int32 _ZOrder) {
}

void USBMenuGridElement::SendToFrontZOrder() {
}

void USBMenuGridElement::RestoreDefaultZOrder() {
}



USBMenuGridElement::USBMenuGridElement() {
    this->ElementColSpan = 1;
    this->ElementRowSpan = 1;
    this->ZOrder = 0;
    this->MyGrid = NULL;
    this->column = 0;
    this->row = 0;
    this->NavigationStyle = ESBGridNavigationStyle::Grid;
    this->OnNavigatedSoundCue = NULL;
    this->PressActionName = TEXT("Accept");
    this->DefaultZOrder = 0;
}

