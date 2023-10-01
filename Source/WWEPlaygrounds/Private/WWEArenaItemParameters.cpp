#include "WWEArenaItemParameters.h"

EWWEArenaSectionType UWWEArenaItemParameters::GetArenaSection() const {
    return EWWEArenaSectionType::NONE;
}

UWWEArenaItemParameters::UWWEArenaItemParameters() {
    this->InteractableWeaponClass = NULL;
    this->ArenaEditAction = NULL;
    this->ArenaSectionType = EWWEArenaSectionType::NONE;
    this->bIsDefault = false;
    this->CachedArenaItemWidgetImage = NULL;
    this->bUnlockedOnCampaign = false;
}

