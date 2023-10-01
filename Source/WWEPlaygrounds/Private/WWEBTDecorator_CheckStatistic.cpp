#include "WWEBTDecorator_CheckStatistic.h"

UWWEBTDecorator_CheckStatistic::UWWEBTDecorator_CheckStatistic() {
    this->Comparison = EWWEComparisonType::EqualTo;
    this->Percentage = 0.00f;
    this->bLastActionCheck = false;
}

