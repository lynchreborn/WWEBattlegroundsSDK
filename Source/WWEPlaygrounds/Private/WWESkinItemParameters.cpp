#include "WWESkinItemParameters.h"

EWWESkinItemType UWWESkinItemParameters::GetSkinItemType() const {
    return EWWESkinItemType::NONE;
}

EWWEGender UWWESkinItemParameters::GetGender() const {
    return EWWEGender::Male;
}

FWWESkinItemAssets UWWESkinItemParameters::GetAssets(EPGCharacterBody Body, int32 SelectedSkinAdditionalIdx) const {
    return FWWESkinItemAssets{};
}

bool UWWESkinItemParameters::CheckItemCategoryPath(EWWEItemCategory ItemCategory) {
    return false;
}

UWWESkinItemParameters::UWWESkinItemParameters() {
    this->ItemCategoryPath = 0;
    this->Gender = EWWEGender::Male;
    this->SkinItemType = EWWESkinItemType::NONE;
    this->TextureConfig = NULL;
    this->bTextureArea = true;
    this->SkinMainRough = 0.00f;
    this->SkinMainSpec = 0.00f;
    this->SkinSecondaryRough = 0.00f;
    this->SkinSecondarySpec = 0.00f;
    this->SkinSecondaryOpacity = 0.00f;
    this->ExtColorRough = 0.00f;
    this->ExtColorSpec = 0.00f;
    this->ExtColorOpacity = 0.00f;
    this->IntColorRough = 0.00f;
    this->IntColorSpec = 0.00f;
    this->IntColorOpacity = 0.00f;
    this->NailsRough = 0.00f;
    this->NailsSpec = 0.00f;
    this->NailsOpacity = 0.00f;
    this->NipplesRough = 0.00f;
    this->NipplesSpec = 0.00f;
    this->NipplesOpacity = 0.00f;
    this->LipsRough = 0.00f;
    this->LipsSpec = 0.00f;
    this->LipsOpacity = 0.00f;
    this->HeadExtRough = 0.00f;
    this->HeadExtSpec = 0.00f;
    this->HeadExtOpacity = 0.00f;
    this->ShavedBeardOpacity = 0.00f;
    this->CachedSkinItemWidgetImage = NULL;
    this->bUnlockedOnCampaign = false;
}

