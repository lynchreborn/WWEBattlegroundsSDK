#include "WWECharacterPortraitsRenderer.h"


AWWECharacterPortraitsRenderer::AWWECharacterPortraitsRenderer() {
    this->MannequinDefaultCharacterParams = NULL;
    this->NextCharacterDelay = 0.00f;
    this->RenderDelay = 0.00f;
    this->CharacterCollection = NULL;
    this->DefaultPoseNoAnimation = NULL;
    this->Mannequin = NULL;
    this->RemainingTime = 0.00f;
    this->CurrentCharacterIndex = 0;
    this->CurrentOutfitIndex = 0;
    this->RendersFinished = false;
    this->CurrentCamera = 0;
    this->RenderReady = true;
}

