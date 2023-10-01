#include "WWEAIHeadBehaviourComponent.h"

UWWEAIHeadBehaviourComponent::UWWEAIHeadBehaviourComponent() {
    this->OpponentAngle = 180.00f;
    this->OpponentAngleWaitingOutisdeTagTeam = 180.00f;
    this->CharacterOwner = NULL;
    this->RivalLookingAt = NULL;
    this->HeadIsLookingAt = EWWEElementToLookAt::None;
    this->ExtraAxisZAngle = 0.00f;
    this->TimeToLookAway = 2.00f;
    this->DotAnglePitch = 0.80f;
}

