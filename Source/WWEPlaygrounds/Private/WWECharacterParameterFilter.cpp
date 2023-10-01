#include "WWECharacterParameterFilter.h"

FWWECharacterParameterFilter::FWWECharacterParameterFilter() {
    this->FilterBitMask = 0;
    this->Gender = EWWEGender::Male;
    this->Rarity = ESBItemRarity::Common;
    this->FightingStyles = 0;
    this->bIsFavourite = false;
    this->CharacterSuperstarTypes = 0;
}

