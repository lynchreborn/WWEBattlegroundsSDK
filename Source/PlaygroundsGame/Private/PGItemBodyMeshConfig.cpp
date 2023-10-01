#include "PGItemBodyMeshConfig.h"

TSoftObjectPtr<USkeletalMesh> UPGItemBodyMeshConfig::GetMeshByType(EPGCharacterBody Body, bool bForUseInLobby) const {
    return NULL;
}

UPGItemBodyMeshConfig::UPGItemBodyMeshConfig() {
    this->BodyPartsOccluded = NULL;
}

