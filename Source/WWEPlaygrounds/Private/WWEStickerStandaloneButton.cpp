#include "WWEStickerStandaloneButton.h"

void UWWEStickerStandaloneButton::StartStickerMaterialAnimation_Implementation(float StickerTargetFold, float StickerAnimationDuration) {
}

void UWWEStickerStandaloneButton::InitializeStickerMaterialAnimation_Implementation(float StickerInitialFold, float StickerAngle) {
}

UWWEStickerStandaloneButton::UWWEStickerStandaloneButton() {
    this->Retainer = NULL;
    this->RetainerMaterial = NULL;
    this->TransitionInAnimation = NULL;
    this->Temp_StickerInitialFold = 0.00f;
    this->Temp_StickerTargetFold = 0.00f;
    this->Temp_StickerAnimationDuration = 0.00f;
    this->Temp_CurrentStickerAnimTime = 0.00f;
    this->bTemp_Animating = false;
}

