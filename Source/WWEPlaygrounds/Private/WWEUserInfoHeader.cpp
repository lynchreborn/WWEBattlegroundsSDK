#include "WWEUserInfoHeader.h"

void UWWEUserInfoHeader::UpdateUserInfo() {
}

void UWWEUserInfoHeader::UpdateCurrency() {
}

void UWWEUserInfoHeader::UpdateAll() {
}

UWWEUserInfoHeader::UWWEUserInfoHeader() {
    this->UserNameVisibility = ESlateVisibility::SelfHitTestInvisible;
    this->UserLevelVisibility = ESlateVisibility::SelfHitTestInvisible;
    this->HardCurrencyVisibility = ESlateVisibility::SelfHitTestInvisible;
    this->SoftCurrencyVisibility = ESlateVisibility::SelfHitTestInvisible;
    this->username = NULL;
    this->Level = NULL;
    this->UserPrestige = NULL;
    this->SoftCurrencySlot = NULL;
    this->HardCurrencySlot = NULL;
}

