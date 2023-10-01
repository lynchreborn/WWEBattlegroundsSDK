#include "WWESkillTooltip.h"

UWWESkillTooltip::UWWESkillTooltip() {
    this->DescriptionBox = NULL;
    this->DescriptionText = NULL;
    this->DescriptionSpacer = NULL;
    this->CanvasPrice = NULL;
    this->HardCurrencyPrice = NULL;
    this->SoftCurrencyPrice = NULL;
    this->SoftCurrencyIcon = NULL;
    this->HardCurrencyIcon = NULL;
    this->BasicTextStyle = NULL;
    this->PreviousTextStyle = NULL;
    this->SelectedTextStyle = NULL;
    this->TooltipPositionAttackX = 0.00f;
    this->TooltipPositionDefenseX = 0.00f;
    this->TooltipPositionCharismaX = 0.00f;
    this->TooltipPositionPositionY = 0.00f;
    this->DescriptionSpacerSizeY = 7.00f;
}

