#include "WWEUserInfoHeaderCurrencySlot.h"

void UWWEUserInfoHeaderCurrencySlot::SetCurrencyValue(int32 Value) {
}

UWWEUserInfoHeaderCurrencySlot::UWWEUserInfoHeaderCurrencySlot() {
    this->SlotType = EWWECurrencyType::Hard;
    this->bRemoveBackground = false;
    this->SoftCurrencyIcon = NULL;
    this->HardCurrencyIcon = NULL;
    this->CurrencyIcon = NULL;
    this->CurrencyValue = NULL;
    this->BG = NULL;
}

