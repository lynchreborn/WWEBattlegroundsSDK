#include "WWEAIAggroComponent.h"

UWWEAIAggroComponent::UWWEAIAggroComponent() {
    this->AggroThreshold = 120.00f;
    this->PercentAggroDecayPerSecond = 0.10f;
    this->bDrawDebugArrows = false;
    this->CurrentHighestTarget = NULL;
    this->CachedCharacter = NULL;
}

