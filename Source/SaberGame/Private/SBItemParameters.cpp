#include "SBItemParameters.h"

void USBItemParameters::SetCurrencyCost(int32 Value, bool bHardCurrencyFlag) {
}

bool USBItemParameters::IsPurchasable(bool bHardCurrencyFlag) const {
    return false;
}

bool USBItemParameters::IsAvailableInEnvelopes() const {
    return false;
}

FString USBItemParameters::GetSortingTag() const {
    return TEXT("");
}

FText USBItemParameters::GetItemName() {
    return FText::GetEmpty();
}

FString USBItemParameters::GetItemID() const {
    return TEXT("");
}

UTexture2D* USBItemParameters::GetItemIcon() {
    return NULL;
}

int32 USBItemParameters::GetCurrencyCost(bool bHardCurrencyFlag) const {
    return 0;
}

void USBItemParameters::BoughtMe(bool bWithHardCurrency, int32 Amount) {
}

USBItemParameters::USBItemParameters() {
    this->Rarity = ESBItemRarity::Common;
    this->bIsItemHiddenInGame = false;
    this->bIsItemCore = true;
    this->bIsItemUnlockedAtStart = false;
    this->bIsItemVisible = true;
    this->Quantity = 0;
    this->bAvailableInEnvelopes = false;
    this->SoftCurrencyCost = 0;
    this->HardCurrencyCost = 0;
}

