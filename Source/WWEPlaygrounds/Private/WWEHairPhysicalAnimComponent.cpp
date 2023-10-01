#include "WWEHairPhysicalAnimComponent.h"

UWWEHairPhysicalAnimComponent::UWWEHairPhysicalAnimComponent() {
    this->InitialPhysicsBone = TEXT("C_hlp_X_centralhelper_export");
    this->bEnableOnSwitch = true;
    this->bEnableOnOthers = true;
    this->bActived = false;
}

