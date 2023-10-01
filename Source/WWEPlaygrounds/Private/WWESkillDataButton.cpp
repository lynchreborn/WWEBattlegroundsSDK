#include "WWESkillDataButton.h"

void UWWESkillDataButton::RecoverFocus() {
}

void UWWESkillDataButton::OnPurchasePopup(ESBPopupSceneClosingReason Cause) {
}

void UWWESkillDataButton::ConfirmationPurchaseMsgClosed(ESBMessageBoxClosingReason Cause) {
}

UWWESkillDataButton::UWWESkillDataButton() {
    this->SkillTreeType = EWWESkillType::Attack;
    this->SkillData = EWWESkillDataType::IncreasesDamage;
    this->SkillLevelsPosition = EWWEDirection::Right;
    this->bFirsSkillOfTree = false;
    this->SkillFrameStyle = 0;
    this->NavigationRightSkill = NULL;
    this->NavigationLeftSkill = NULL;
    this->NavigationUpSkill = NULL;
    this->NavigationDownSkill = NULL;
    this->SkillTotalLevels = 0;
    this->FrameImage = NULL;
    this->SkillImage = NULL;
    this->SuperSkillFx = NULL;
    this->SkillLevelsCanvasPanel = NULL;
    this->SkillLevelsContainer = NULL;
    this->SkillDataButton_Pulse = NULL;
    this->DeactivatedSkill = NULL;
    this->FullyActivatedSkill = NULL;
    this->SkillSlotData = NULL;
    this->SkillTreeMenu = NULL;
    this->FightingStyle = EWWEFightingStyle::Technician;
    this->bIsSuperSkill = false;
    this->bPurchaseCompleteSkillTree = false;
    this->bWithHardCurrency = false;
    this->PassSound = NULL;
}

