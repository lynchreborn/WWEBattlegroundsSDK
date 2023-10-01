#include "WWESkillSlot.h"

FWWESkillSlot::FWWESkillSlot() {
    this->SlotId = 0;
    this->SkillData = NULL;
    this->MaxLevel = 0;
    this->SkillSlotDepth = 0;
    this->VerticalSkillSlotDepth = 0.00f;
    this->bIsDepthCalculated = false;
}

