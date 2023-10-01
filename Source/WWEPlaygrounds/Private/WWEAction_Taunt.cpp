#include "WWEAction_Taunt.h"

UWWEAction_Taunt::UWWEAction_Taunt() {
    this->RivalBecauseWantTurnbuckleVariation = NULL;
    this->bCharismaLockTaunt = false;
    this->TauntVariation = 0;
    this->HeatToGainDuringAnimation = 0.00f;
    this->HeatGainedDuringAnimation = 0.00f;
    this->HeatToGainOnEnd = 0.00f;
    this->MontageDuration = 0.00f;
}

