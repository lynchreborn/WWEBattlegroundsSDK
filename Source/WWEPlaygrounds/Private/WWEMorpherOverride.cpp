#include "WWEMorpherOverride.h"

FWWEMorpherOverride::FWWEMorpherOverride() {
    this->bConsiderGender = false;
    this->Gender = EWWEGender::Male;
    this->bConsiderHeadType = false;
    this->HeadType = EWWEHeadType::Afro01;
    this->SmallMorpherMax = 0.00f;
    this->LargeMorpherMax = 0.00f;
}

