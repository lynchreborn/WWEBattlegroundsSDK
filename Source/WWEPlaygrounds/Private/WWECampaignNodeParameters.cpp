#include "WWECampaignNodeParameters.h"

UWWECampaignNodeParameters::UWWECampaignNodeParameters() {
    this->NodeType = EWWECampaignNodeType::City;
    this->IsFirstZoneNode = false;
    this->IsLastZoneNode = false;
    this->ZoneIndex = 0;
    this->IntroComic = NULL;
    this->EndComic = NULL;
    this->UnselectedFrameImage = NULL;
    this->SelectedFrameImage = NULL;
    this->NodeIconImage = NULL;
    this->NodePositionRespectOfPrev = EWWEDirections::NONE;
    this->DistanceRespectOfPrev = 1;
    this->bSkipEntrance = false;
    this->bIsWrestmaniaEvent = false;
    this->bHasToBeBought = false;
    this->SoftCurrencyCost = 0;
    this->HardCurrencyCost = 0;
}

