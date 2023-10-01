#include "WWEMatchConfigurationGridSlot.h"

UWWEMatchConfigurationGridSlot::UWWEMatchConfigurationGridSlot() {
    this->InnerGrid = NULL;
    this->SimpleSlot_Selected = NULL;
    this->SimpleSlot_Unselected = NULL;
    this->Selected = NULL;
    this->Unselected = NULL;
    this->LabelTitle = NULL;
    this->bIsNavigating = false;
    this->IndexInGrid = 0;
    this->CurrentSelectedSubOption = -1;
    this->DefualtSubOptionMenu = -1;
}

