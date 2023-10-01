#include "WWEGridSlot.h"

UWWEGridSlot::UWWEGridSlot() {
    this->ContentPanel = NULL;
    this->ContentClass = NULL;
    this->bUseContrastTextures = false;
    this->EnterGridAnimation = NULL;
    this->bCurrentlyInside = false;
    this->Content = NULL;
    this->MyTextureSet = NULL;
    this->SelectedSound = NULL;
    this->AcceptSound = NULL;
}

