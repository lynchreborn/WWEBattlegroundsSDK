#include "PGItemsRenderer.h"



APGItemsRenderer::APGItemsRenderer() {
    this->MannequinCharacterParams = NULL;
    this->RenderSize = 0;
    this->NextItemDelay = 0.00f;
    this->RenderDelay = 0.00f;
    this->VanityItemsCollection = NULL;
    this->SkinItemsCollection = NULL;
    this->MaleMannequin = NULL;
    this->FemaleMannequin = NULL;
    this->RemainingTime = 0.00f;
    this->CurrentVanityIndex = 0;
    this->CurrentSkinIndex = 0;
    this->RendersFinished = false;
    this->VanitiesFinished = false;
    this->SkinsFinished = false;
    this->ArenaVanitiesFinished = false;
    this->CurrentCamera = 0;
    this->RenderReady = true;
}

