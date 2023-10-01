#include "WWEAction_LaunchCharacter.h"

UWWEAction_LaunchCharacter::UWWEAction_LaunchCharacter() {
    this->RopesDistanceOnRing = 300.00f;
    this->RopesDistanceOutRing = 200.00f;
    this->MaxDistance = 300.00f;
    this->bSelectCloseDistance = false;
    this->bToRing = false;
    this->bToOutside = false;
    this->bToCrocodile = false;
    this->bToCoffin = false;
    this->bFromRing = false;
    this->ThrowTargetSelected = NULL;
}

