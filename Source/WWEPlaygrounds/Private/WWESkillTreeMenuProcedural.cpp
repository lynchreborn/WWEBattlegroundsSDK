#include "WWESkillTreeMenuProcedural.h"

void UWWESkillTreeMenuProcedural::ReplayFighterSong() {
}

void UWWESkillTreeMenuProcedural::OnTutorialPopupClosed(ESBPopupSceneClosingReason Reason) {
}

UWWESkillTreeMenuProcedural::UWWESkillTreeMenuProcedural() {
    this->bNeedToRecoverFocus = false;
    this->CanvasPanelAttack = NULL;
    this->CanvasPanelDefense = NULL;
    this->CanvasPanelCharisma = NULL;
    this->CanvasPanelAttackLines = NULL;
    this->CanvasPanelDefenseLines = NULL;
    this->CanvasPanelCharismaLines = NULL;
    this->BPRightPlatformBar = NULL;
    this->SkillTooltip = NULL;
    this->UserInfoHeader = NULL;
    this->horizontalOffset = 0.00f;
    this->verticalOffset = 0.00f;
    this->SkillSlotClass = NULL;
    this->SkillLineClass = NULL;
    this->CharacterBoxClass = NULL;
    this->TimeToRestartNavigation = 0.20f;
    this->bIsNavigationEnabled = true;
    this->bUpdateShopAfterFocus = false;
    this->bIsSkillTreeCompleted = false;
    this->CharacterParameters = NULL;
    this->SkillTreeSelected = NULL;
    this->CharacterBox = NULL;
    this->AudioPlayer = NULL;
}

