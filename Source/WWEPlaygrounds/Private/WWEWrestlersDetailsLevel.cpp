#include "WWEWrestlersDetailsLevel.h"

void UWWEWrestlersDetailsLevel::SetIsFillingFromDelegate() {
}

UWWEWrestlersDetailsLevel::UWWEWrestlersDetailsLevel() {
    this->LevelProgressBar = NULL;
    this->BarFillImage = NULL;
    this->CurrentXP = NULL;
    this->MaxXP = NULL;
    this->LevelHorizontalBox = NULL;
    this->MaxLevelIndicator = NULL;
    this->LevelUp = NULL;
    this->ExpBarON = NULL;
    this->ExpBarOFF = NULL;
    this->MaterialIdle = NULL;
    this->MaterialFill = NULL;
    this->MaterialIdleDynamicInstance = NULL;
    this->MaterialFillDynamicInstance = NULL;
    this->CurrentMaterialDynamicInstance = NULL;
    this->bIsBarFilling = false;
}

