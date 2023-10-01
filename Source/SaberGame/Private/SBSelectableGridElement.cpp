#include "SBSelectableGridElement.h"

void USBSelectableGridElement::SetSelected(bool _bIsSelected) {
}

void USBSelectableGridElement::SetForceInvisible(bool bNewForceInvisible) {
}

bool USBSelectableGridElement::IsSelected() {
    return false;
}

USBSelectableGrid* USBSelectableGridElement::GetSelectableGrid() {
    return NULL;
}

USBSelectableGridElement::USBSelectableGridElement() {
    this->SelectedWidget = NULL;
}

