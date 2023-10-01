#include "WWEArenaEditorParticleManager.h"
#include "Components/SceneComponent.h"

void AWWEArenaEditorParticleManager::MulticastStartParticlesInCombat_Implementation() {
}

AWWEArenaEditorParticleManager::AWWEArenaEditorParticleManager() {
    this->ParticleManagerRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->PlayEffectsTime = 3.00f;
}

