#include "WWEPowerUpTooltip.h"

UWWEPowerUpTooltip::UWWEPowerUpTooltip() {
    this->TextName = NULL;
    this->TextLevelValue = NULL;
    this->TextDescription = NULL;
    this->TextLeft1 = NULL;
    this->TextLeft2 = NULL;
    this->TextLeft3 = NULL;
    this->TextRight1 = NULL;
    this->TextRight2 = NULL;
    this->TextRight3 = NULL;
    this->CachedSaveGame = NULL;
    this->BasicTextStyle = NULL;
    this->PreviousTextStyle = NULL;
    this->SelectedTextStyle = NULL;
    this->TooltipPositionTier1X = 0.00f;
    this->TooltipPositionTier2X = 0.00f;
    this->TooltipPositionTier3X = 0.00f;
    this->TooltipPositionY = 0.00f;
}

