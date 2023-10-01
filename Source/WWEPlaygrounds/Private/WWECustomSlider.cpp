#include "WWECustomSlider.h"



UWWECustomSlider::UWWECustomSlider() {
    this->CustSlider = NULL;
    this->EditableName = NULL;
    this->Selected = NULL;
    this->Unselected = NULL;
    this->MorpherSpeed = 0.00f;
    this->CachedIconImageUnselected = NULL;
    this->CachedIconImageSelected = NULL;
    this->OwnerGrid = NULL;
    this->bCurrentlyInside = false;
    this->GridEnterAnimation = NULL;
    this->GridEnterAnimationSpeed = 0.00f;
    this->bIsSlotActive = false;
    this->CachedZOrder = 0;
    this->OnIncreaseSoundCue = NULL;
    this->OnDecreaseSoundCue = NULL;
    this->bCanShowMorpherInfo = false;
}

