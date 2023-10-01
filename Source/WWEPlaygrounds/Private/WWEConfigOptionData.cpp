#include "WWEConfigOptionData.h"

FWWEConfigOptionData::FWWEConfigOptionData() {
    this->bNormalOption = false;
    this->OptionType = EWWEVariableType::None;
    this->bSpecialOption = false;
    this->SpecialKey = EWWESpecialOptions::None;
    this->IntValue = 0;
}

