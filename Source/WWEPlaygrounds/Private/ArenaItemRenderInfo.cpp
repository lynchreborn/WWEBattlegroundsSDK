#include "ArenaItemRenderInfo.h"

FArenaItemRenderInfo::FArenaItemRenderInfo() {
    this->bHasToBeRendered = false;
    this->Camera = NULL;
    this->StaticMesh = NULL;
    this->SkeletalMesh = NULL;
    this->MaterialInstance = NULL;
}

