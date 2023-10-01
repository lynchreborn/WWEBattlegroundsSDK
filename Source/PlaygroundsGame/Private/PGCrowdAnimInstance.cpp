#include "PGCrowdAnimInstance.h"

UPGCrowdAnimInstance::UPGCrowdAnimInstance() {
    this->CrowdState = EPGCrowdState::CS_Idle_Loop;
    this->LastCrowdState = EPGCrowdState::CS_Idle_Loop;
    this->OwningCharacter = NULL;
    this->NextCrowdState = EPGCrowdState::CS_Idle_Loop;
    this->HeadLookAtAlpha = 0.00f;
}

