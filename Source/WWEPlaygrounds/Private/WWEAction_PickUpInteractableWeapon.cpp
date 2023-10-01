#include "WWEAction_PickUpInteractableWeapon.h"

UWWEAction_PickUpInteractableWeapon::UWWEAction_PickUpInteractableWeapon() {
    this->PrepareWeaponObjectType = EWWETypeObjects::None;
    this->PrepareWeaponAligment = EWWEObjectAligment::None;
    this->bFailVariation = false;
    this->MoneyPickUpTimer = 0.00f;
}

