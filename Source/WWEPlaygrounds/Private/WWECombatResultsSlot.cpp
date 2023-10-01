#include "WWECombatResultsSlot.h"

UWWECombatResultsSlot::UWWECombatResultsSlot() {
    this->DegubXP = false;
    this->DegubInitialXP = 0;
    this->DebugXPToConsume = 0;
    this->SlotBody = NULL;
    this->PlayerInfoBox = NULL;
    this->CharacterNameBox = NULL;
    this->RarityIcon = NULL;
    this->ResultText = NULL;
    this->WinTextStyle = NULL;
    this->LoseTextStyle = NULL;
    this->TextureSet = NULL;
    this->AssociatedCharacterCombat = NULL;
    this->AssociatedPlayerState = NULL;
    this->AssociatedPlayerSlot = NULL;
    this->GameInstance = NULL;
    this->SaveData = NULL;
    this->ContentUI = NULL;
}

