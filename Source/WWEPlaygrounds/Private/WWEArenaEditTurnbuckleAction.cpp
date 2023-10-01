#include "WWEArenaEditTurnbuckleAction.h"

UWWEArenaEditTurnbuckleAction::UWWEArenaEditTurnbuckleAction() {
    this->TurnbuckleMeshInstance = NULL;
    this->DestroyedPostMeshInstance = NULL;
    this->DestroyedTurnbuckleUpMeshInstance = NULL;
    this->DestroyedTurnbuckleMidMeshInstance = NULL;
    this->DestroyedTurnbuckleDownMeshInstance = NULL;
    this->DestroyedPadUpMeshInstance = NULL;
    this->DestroyedPadMidMeshInstance = NULL;
    this->DestroyedPadDownMeshInstance = NULL;
    this->WeaponMeshInstance = NULL;
    this->SemiDestroyedWeaponMeshInstance = NULL;
    this->DestroyedWeaponMeshInstance = NULL;
    this->TurnbuckleMatRef = NULL;
    this->DestroyedTurnbuckleMaterialRef = NULL;
    this->WeaponMaterialRef = NULL;
}

