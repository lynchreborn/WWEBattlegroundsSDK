#include "WWECommentatorManager.h"
#include "Components/AudioComponent.h"

void AWWECommentatorManager::Reset() {
}

void AWWECommentatorManager::OnSoundEnd() {
}

AWWECommentatorManager::AWWECommentatorManager() {
    this->AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
    this->CurrentComment = NULL;
    this->EnqueuedComment = NULL;
    this->CachedMatchMode = ESBMatchMode::None;
    this->CachedCurrentArenaMapId = -1;
}

