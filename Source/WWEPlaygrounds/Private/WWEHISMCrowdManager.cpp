#include "WWEHISMCrowdManager.h"
#include "WWECrowdChantComponent.h"
#include "WWECrowdVertexAnimationComponent.h"

AWWEHISMCrowdManager::AWWEHISMCrowdManager() {
    this->CrowdChantComponent = CreateDefaultSubobject<UWWECrowdChantComponent>(TEXT("Crowd Chant Component"));
    this->CrowdVertexAnimationComponent = CreateDefaultSubobject<UWWECrowdVertexAnimationComponent>(TEXT("Crowd Vertex Animation Component"));
}

