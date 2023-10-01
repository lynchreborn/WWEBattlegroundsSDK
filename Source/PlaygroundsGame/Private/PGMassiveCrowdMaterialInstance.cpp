#include "PGMassiveCrowdMaterialInstance.h"

FPGMassiveCrowdMaterialInstance::FPGMassiveCrowdMaterialInstance() {
    this->MaterialInstance = NULL;
    this->NextAnimID = 0;
    this->CurrentAnimID = 0;
    this->NextAnimType = EPGMassiveCrowdAnimationType::None;
    this->CurrentAnimType = EPGMassiveCrowdAnimationType::None;
    this->TeamID = ESBTeam::Team01;
}

