#include "WWEBTDecorator_CheckInt.h"

UWWEBTDecorator_CheckInt::UWWEBTDecorator_CheckInt() {
    this->Comparison = EWWEComparisonType::EqualTo;
    this->Value = 0;
    this->bLastActionCheck = false;
}

