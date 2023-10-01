#include "WWEVanityItemParameters.h"

EWWEVanityItemType UWWEVanityItemParameters::GetVanityItemType() const {
    return EWWEVanityItemType::NONE;
}

FText UWWEVanityItemParameters::GetUnlockConditionDesc() {
    return FText::GetEmpty();
}

int32 UWWEVanityItemParameters::GetNumMaterialsInstance() const {
    return 0;
}

EWWEGender UWWEVanityItemParameters::GetGender() const {
    return EWWEGender::Male;
}

FWWEVanityItemAssets UWWEVanityItemParameters::GetAssets(EPGCharacterBody Body, EWWEHeadType HeadType, int32 SelectedVanityMaterialIdx) const {
    return FWWEVanityItemAssets{};
}

bool UWWEVanityItemParameters::GetAllowsMaterialSelection() const {
    return false;
}

bool UWWEVanityItemParameters::CheckItemCategoryPath(EWWEItemCategory ItemCategory) {
    return false;
}

UWWEVanityItemParameters::UWWEVanityItemParameters() {
    this->ItemCategoryPath = 0;
    this->bShouldEnablePhysics = false;
    this->Gender = EWWEGender::Male;
    this->VanityItemType = EWWEVanityItemType::NONE;
    this->bShouldCastShadow = true;
    this->MeshHeadConfig = NULL;
    this->MeshSuperstarConfig = NULL;
    this->bAllowsMaterialSelection = false;
    this->PortraitImageTexture = NULL;
    this->PortraitImageBigTexture = NULL;
    this->ResultScreenImageTexture = NULL;
    this->CachedVanityItemWidgetImage = NULL;
    this->bUnlockedOnCampaign = false;
}

