#include "WWEAnimationItemParameters.h"

EWWEAnimationItemType UWWEAnimationItemParameters::GetItemType() const {
    return EWWEAnimationItemType::None;
}

UWWEAnimationItemParameters::UWWEAnimationItemParameters() {
    this->FightingStyles = 255;
    this->CachedItemWidgetImage = NULL;
    this->Variation = NULL;
    this->ItemType = EWWEAnimationItemType::None;
    this->VideoItemData = NULL;
    this->bUnlockedOnCampaign = false;
}

