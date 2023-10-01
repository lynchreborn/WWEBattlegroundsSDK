#include "WWECharacterEditorCommonSlot.h"

void UWWECharacterEditorCommonSlot::SetGrayedItem(bool bIsGray) {
}



UWWECharacterEditorCommonSlot::UWWECharacterEditorCommonSlot() {
    this->bIsSlotWasActivate = false;
    this->bInputHandled = true;
    this->bPurchaseInProgress = false;
    this->bDelayLoading = false;
    this->bSyncronousPreload = true;
    this->bRequiresLoading = true;
    this->Selected = NULL;
    this->Unselected = NULL;
    this->ItemImage = NULL;
    this->SelectedCheck = NULL;
    this->CachedBackgroundImageUnselected = NULL;
    this->CachedBackgroundImageSelected = NULL;
    this->CachedItemImage = NULL;
    this->OwnerGrid = NULL;
    this->bCurrentlyInside = false;
    this->GridEnterAnimation = NULL;
    this->GridEnterAnimationSpeed = 0.00f;
    this->bIsSlotActive = false;
    this->CachedZOrder = 0;
    this->OnNavigatedSoundCue = NULL;
    this->OnPressedCachedSoundCue = NULL;
    this->OnLockedPressedCachedSoundCue = NULL;
    this->LockImage = NULL;
    this->HardCurrencyCanvas = NULL;
    this->HardCurrencyText = NULL;
    this->SoftCurrencyCanvas = NULL;
    this->SoftCurrencyText = NULL;
    this->bCanBuy = false;
    this->bCanShowItemId = false;
    this->OfferPanel = NULL;
    this->OfferTimeText = NULL;
    this->OfferPercentPanel = NULL;
    this->OfferPercentText = NULL;
}

