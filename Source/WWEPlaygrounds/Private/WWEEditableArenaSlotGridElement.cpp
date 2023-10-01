#include "WWEEditableArenaSlotGridElement.h"

void UWWEEditableArenaSlotGridElement::ConfirmationMessageBoxClosed(ESBMessageBoxClosingReason Cause) {
}

UWWEEditableArenaSlotGridElement::UWWEEditableArenaSlotGridElement() {
    this->Selected = NULL;
    this->Unselected = NULL;
    this->CreateTextWidgetClass = NULL;
    this->EditTextWidgetClass = NULL;
    this->TextTexture = NULL;
    this->MaterialEmpty = NULL;
    this->MaterialEmptySelected = NULL;
    this->MaterialDefault = NULL;
    this->MaterialDefaultSelected = NULL;
    this->MaterialSlot = NULL;
    this->MaterialSlotSelected = NULL;
    this->EditableArenaId = -1;
    this->ScreenWidget = NULL;
    this->ButtonMaterial = NULL;
    this->ButtonsManager = NULL;
}

