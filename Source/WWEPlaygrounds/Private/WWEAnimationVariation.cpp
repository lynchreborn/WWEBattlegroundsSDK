#include "WWEAnimationVariation.h"

UWWEAnimationVariation::UWWEAnimationVariation() {
    this->ActionGroups = 1;
    this->MinHeight = 0;
    this->MaxHeight = 300;
    this->bGenderFilter = false;
    this->AllowedGender = EWWEGender::Male;
    this->Weight = 1;
    this->CameraSequenceTriggerChance = 0.00f;
    this->CameraSequenceSectionsToPlay.AddDefaulted(1);
    this->CameraSequenceSectionsToAvoid.AddDefaulted(1);
    this->bIsPartOfCombination = true;
    this->CombinationMode = EWWECombinationList::None;
}

