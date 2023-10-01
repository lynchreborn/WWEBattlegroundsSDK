#include "AnimViewerCharacterParams.h"

FAnimViewerCharacterParams::FAnimViewerCharacterParams() {
    this->Team = ESBTeam::Team01;
    this->bDumped = false;
    this->bFaceUp = false;
    this->bRoll = false;
    this->PainBodyPart = EWWEBodyPart::None;
    this->InputDirection = EWWEDirection::None;
    this->BehaviorTree = NULL;
    this->bRefereeMode = false;
    this->ForcedHitComboVariation = 0;
}

