#include "WWEAction_GenericReceiveHit.h"

UWWEAction_GenericReceiveHit::UWWEAction_GenericReceiveHit() {
    this->Direction = EWWEDirection::None;
    this->bUseInterruptionStep = false;
    this->bGoToTheGround = false;
    this->bGoToTheGroundOfRing = false;
    this->bFall = false;
    this->bCurrentGoToTheGround = false;
}

