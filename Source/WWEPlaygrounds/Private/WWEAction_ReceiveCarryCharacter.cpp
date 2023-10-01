#include "WWEAction_ReceiveCarryCharacter.h"

UWWEAction_ReceiveCarryCharacter::UWWEAction_ReceiveCarryCharacter() {
    this->AutoCounterIfHPIsHigherThan = 0.15f;
    this->MaxAutoCounterIncreaseByCharisma = 0.00f;
    this->CantCounterCarryInRoyalRumbleIfHPRatioIsLowerThan = 0.00f;
    this->CarryVariation = 0;
    this->bAutoCounter = false;
}

