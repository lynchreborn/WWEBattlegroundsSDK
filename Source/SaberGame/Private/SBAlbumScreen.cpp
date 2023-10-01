#include "SBAlbumScreen.h"

USBAlbumScreen::USBAlbumScreen() {
    this->Retainer = NULL;
    this->RetainerMaterial = NULL;
    this->StickerInitialFold = 0.15f;
    this->StickerTargetFold = 0.72f;
    this->StickerAngle = 0.70f;
    this->StickerAnimationDuration = 0.60f;
    this->OnTransitionInSoundCue = NULL;
    this->OnTransitionOutSoundCue = NULL;
    this->Temp_CurrentStickerAnimTime = 0.00f;
    this->bTemp_Animating = false;
    this->Temp_StickerFromValue = 0.00f;
    this->Temp_StickerToValue = 0.00f;
}

