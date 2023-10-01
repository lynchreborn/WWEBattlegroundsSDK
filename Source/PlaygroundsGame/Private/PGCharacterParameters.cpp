#include "PGCharacterParameters.h"

uint8 UPGCharacterParameters::GetRarity() const {
    return 0;
}

UPGCharacterParameters::UPGCharacterParameters() {
    this->BodyType = EPGCharacterBody::CharacterBody01;
    this->bIsCharacterLoading = false;
    this->bIsCharacterLoaded = false;
    this->bIsCharSoundLibLoading = false;
}

