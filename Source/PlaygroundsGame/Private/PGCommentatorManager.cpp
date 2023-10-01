#include "PGCommentatorManager.h"
#include "Components/AudioComponent.h"

void APGCommentatorManager::Reset() {
}

void APGCommentatorManager::OnSoundEnd() {
}

void APGCommentatorManager::DelayedPlay(FPGCommentID CommentID) {
}

APGCommentatorManager::APGCommentatorManager() {
    this->AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
}

