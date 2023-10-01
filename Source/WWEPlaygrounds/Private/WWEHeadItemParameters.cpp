#include "WWEHeadItemParameters.h"

EWWEHeadType UWWEHeadItemParameters::GetHeadType() const {
    return EWWEHeadType::Afro01;
}

EWWEGender UWWEHeadItemParameters::GetGender() const {
    return EWWEGender::Male;
}

FWWEHeadItemAssets UWWEHeadItemParameters::GetAssets(EPGCharacterBody Body) const {
    return FWWEHeadItemAssets{};
}

UWWEHeadItemParameters::UWWEHeadItemParameters() {
    this->Gender = EWWEGender::Male;
    this->HeadType = EWWEHeadType::Afro01;
    this->MeshConfig = NULL;
    this->TextureMapsConfig = NULL;
    this->CachedHeadItemWidgetImage = NULL;
    this->bUnlockedOnCampaign = false;
}

