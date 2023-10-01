#include "WWEPlayerVirtualCurrency.h"

FWWEPlayerVirtualCurrency::FWWEPlayerVirtualCurrency() {
    this->AvailableTotalQuantity = 0;
    this->AvailableEarnedQuantity = 0;
    this->AvailablePurchasedQuantity = 0;
    this->SpentPurchasedQuantity = 0;
    this->ExpiredPurchasedQuantity = 0;
    this->TotalPurchasedQuantity = 0;
    this->IsTracked = false;
}

