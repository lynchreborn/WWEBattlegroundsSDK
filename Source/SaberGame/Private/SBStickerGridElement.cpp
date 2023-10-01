#include "SBStickerGridElement.h"

void USBStickerGridElement::StartStickerMaterialAnimation_Implementation(float StickerTargetFold, float StickerAnimationDuration) {
}

void USBStickerGridElement::InitializeStickerMaterialAnimation_Implementation(float StickerInitialFold, float StickerAngle) {
}

USBStickerGridElement::USBStickerGridElement() {
    this->Retainer = NULL;
    this->RetainerMaterial = NULL;
    this->TransitionInAnimation = NULL;
    this->Temp_StickerInitialFold = 0.00f;
    this->Temp_StickerTargetFold = 0.00f;
    this->Temp_StickerAnimationDuration = 0.00f;
    this->Temp_CurrentStickerAnimTime = 0.00f;
    this->bTemp_Animating = false;
}

