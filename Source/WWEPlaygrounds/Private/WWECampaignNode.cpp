#include "WWECampaignNode.h"

UWWECampaignNode::UWWECampaignNode() {
    this->NodeStatus = EWWECampaignNodeStatus::Locked;
    this->bIsCampaignNode = true;
    this->Parameters = NULL;
    this->PreviousNode = NULL;
}

