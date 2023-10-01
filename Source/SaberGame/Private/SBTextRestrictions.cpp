#include "SBTextRestrictions.h"

FSBTextRestrictions::FSBTextRestrictions() {
    this->bUsesProfanityFilter = false;
    this->bCanContainAllSymbols = false;
    this->bCanContainNumbers = false;
    this->MinLength = 0;
    this->MaxLength = 0;
    this->TextCapitalStyle = ESBTextCapitalStyle::Both;
}

