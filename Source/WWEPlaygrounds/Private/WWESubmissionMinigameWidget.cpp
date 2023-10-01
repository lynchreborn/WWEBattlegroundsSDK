#include "WWESubmissionMinigameWidget.h"

void UWWESubmissionMinigameWidget::DisableMinigame() {
}

UWWESubmissionMinigameWidget::UWWESubmissionMinigameWidget() {
    this->ProgressBar = NULL;
    this->AttackerPanel = NULL;
    this->DefenderPanel = NULL;
    this->KeyboardActionButtonPanel = NULL;
    this->ActionButtonPanel = NULL;
    this->CharismaIcon = NULL;
    this->MaxTranslationYAttackerPanel = 0.00f;
    this->DisableEndTime = 0.00f;
    this->DefendCharacter = NULL;
    this->OffensiveCharacter = NULL;
    this->MaxCountNumber = 20.00f;
    this->FilledAlpha = 0.00f;
    this->CurrentDefendCount = 0.00f;
    this->CurrentOffensiveCount = 0.00f;
    this->ProgressBarMaterial = NULL;
    this->CharacterNameAttack = NULL;
    this->CharacterNameAttack_Yellow = NULL;
    this->CharacterNameDefend = NULL;
    this->CharacterNameDefend_Yellow = NULL;
    this->ButtonAnimation = NULL;
    this->ArrowsAnimation = NULL;
    this->AttackerBlinkAnimation = NULL;
    this->DefenderBlinkAnimation = NULL;
    this->bIsPlayingEndAnimation = false;
    this->bAlternateActionButton = false;
    this->TimeForAlternateActionButton = 0.00f;
}

