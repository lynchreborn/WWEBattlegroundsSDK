#include "WWESkillData.h"

UWWESkillData::UWWESkillData() {
    this->bIsSuperSkill = false;
    this->SkillType = EWWESkillDataType::None;
    this->SkillTreeType = EWWESkillType::Attack;
    this->DeactivatedSkill = NULL;
    this->FullyActivatedSkill = NULL;
    this->bShowOnlyDescription = EWWEDescriptionType::OnlyDescription;
}

