#include "WWECombatResultsLevelUp.h"

void UWWECombatResultsLevelUp::PlayLevelUpAnimation() {
}

void UWWECombatResultsLevelUp::OnEndedLevelUpAnimation() {
}

void UWWECombatResultsLevelUp::DissmissLevelUpWidget() {
}

UWWECombatResultsLevelUp::UWWECombatResultsLevelUp() {
    this->bIsLevelUp = false;
    this->LevelUpAnim = NULL;
    this->DissapearAnim = NULL;
}

