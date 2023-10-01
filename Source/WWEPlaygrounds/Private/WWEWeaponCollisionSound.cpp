#include "WWEWeaponCollisionSound.h"

FWWEWeaponCollisionSound::FWWEWeaponCollisionSound() {
    this->Surface = SurfaceType_Default;
    this->CollisionSound = NULL;
    this->MinImpulse = 0.00f;
    this->MaxImpulse = 0.00f;
    this->MinVolumeMultiplier = 0.00f;
}

