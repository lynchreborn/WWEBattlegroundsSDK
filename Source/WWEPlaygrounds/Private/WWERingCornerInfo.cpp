#include "WWERingCornerInfo.h"

FWWERingCornerInfo::FWWERingCornerInfo() {
    this->CornerMesh = NULL;
    this->DestructionCollider = NULL;
    this->ApronCollider = NULL;
    this->DestructiblePost = NULL;
    this->PostWeapon = NULL;
    this->State = EWWERingPhysicsState::Normal;
    this->bDetachedRopes = false;
}

