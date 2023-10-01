#include "PGMassiveCrowdCharacterType.h"

FPGMassiveCrowdCharacterType::FPGMassiveCrowdCharacterType() {
    this->StaticMesh = NULL;
    this->MinScale = 0.00f;
    this->MaxScale = 0.00f;
    this->CharacterClass = NULL;
    this->CrowdMaterial = NULL;
    this->MaxMaterialInstances = 0;
    this->IsSwapAnimation = false;
    this->SwapAnimationSpeed = 0.00f;
}

