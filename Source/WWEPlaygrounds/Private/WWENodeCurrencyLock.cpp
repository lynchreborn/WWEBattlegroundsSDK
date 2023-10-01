#include "WWENodeCurrencyLock.h"

UWWENodeCurrencyLock::UWWENodeCurrencyLock() {
    this->LockSpacerOffset = 0.00f;
    this->SoftCurrencySpacerOffset = 0.00f;
    this->HardCurrencySpacerOffset = 0.00f;
    this->bShowSoftCurrency = true;
    this->bShowHardCurrency = true;
    this->LockSpacer = NULL;
    this->SoftCurrencySpacer = NULL;
    this->HardCurrencySpacer = NULL;
    this->SoftCurrencyText = NULL;
    this->HardCurrencyText = NULL;
    this->SoftCurrencyBox = NULL;
    this->HardCurrencyBox = NULL;
}

