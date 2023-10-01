#include "WWERootMenuGridElement.h"

void UWWERootMenuGridElement::StartStickerMaterialAnimation_Implementation(float StickerTargetFold, float StickerAnimationDuration) {
}

void UWWERootMenuGridElement::InitializeStickerMaterialAnimation_Implementation(float StickerInitialFold, float StickerAngle) {
}

UWWERootMenuGridElement::UWWERootMenuGridElement() {
    this->Retainer = NULL;
    this->RetainerMaterial = NULL;
    this->TransitionInAnimation = NULL;
    this->Temp_StickerInitialFold = 0.00f;
    this->Temp_StickerTargetFold = 0.00f;
    this->Temp_StickerAnimationDuration = 0.00f;
    this->Temp_CurrentStickerAnimTime = 0.00f;
    this->bTemp_Animating = false;
}

