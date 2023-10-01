#include "WWECameraSequence.h"
#include "CineCameraComponent.h"

AWWECameraSequence::AWWECameraSequence() {
    this->CameraComponent = CreateDefaultSubobject<UCineCameraComponent>(TEXT("CameraComponent"));
    this->FollowType = EWWESequenceFollowType::LookAtAllCharacters;
    this->CachedCharacterCombat = NULL;
    this->bAdjustTranslation = true;
}

