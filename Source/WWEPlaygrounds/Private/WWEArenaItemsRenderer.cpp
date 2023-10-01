#include "WWEArenaItemsRenderer.h"


AWWEArenaItemsRenderer::AWWEArenaItemsRenderer() {
    this->NextArenaItemDelay = 0.00f;
    this->RenderDelay = 0.00f;
    this->ArenaItemCollection = NULL;
    this->RenderWidth = 0.00f;
    this->RenderHeight = 0.00f;
    this->CurrentSectionToRender = EWWEArenaSectionType::NONE;
    this->RemainingTime = 0.00f;
    this->CurrentArenaItemIndex = 0;
    this->RendersFinished = false;
    this->RenderReady = true;
    this->CurrentMaterialInstance = NULL;
    this->CurrentArenaItemObject = NULL;
    this->CurrentTextureRender = NULL;
}

