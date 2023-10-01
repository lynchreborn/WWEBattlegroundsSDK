#include "WWELobbySlot.h"

void UWWELobbySlot::OnMessageBoxClosed(ESBMessageBoxClosingReason Reason) {
}

void UWWELobbySlot::EnableReplayForPlayer() {
}

UWWELobbySlot::UWWELobbySlot() {
    this->CharacterRenderTarget = NULL;
    this->SlotBody = NULL;
    this->PlayerInfoBox = NULL;
    this->CharacterNameBox = NULL;
    this->CharacterStatsPanel = NULL;
    this->OverallBox = NULL;
    this->FightingStyleBox = NULL;
    this->PowerUpDescriptionBox = NULL;
    this->RarityIcon = NULL;
    this->FilterSelector = NULL;
    this->PowerUpBox = NULL;
    this->CharactersGrid = NULL;
    this->PowerUpGrid = NULL;
    this->GridDownArrow = NULL;
    this->GridUpArrow = NULL;
    this->LobbySlot_GridArrows = NULL;
    this->ButtonTip = NULL;
    this->ButtonTipText = NULL;
    this->ReadyBox = NULL;
    this->TextureSet = NULL;
    this->CachedTeam = ESBTeam::Team01;
    this->D_Status = NULL;
    this->D_Context = NULL;
    this->D_Player = NULL;
    this->D_Filter = NULL;
    this->D_Character = NULL;
    this->AssociatedPlayerSlot = NULL;
    this->bKeepLocalFocus = false;
    this->bSelectingCharacter = false;
    this->bEditingPowerUps = false;
    this->bBlockPowerUpsEdition = false;
    this->AppliedFilterIndex = 0;
    this->SelectedCharacterParameters = NULL;
    this->DefaultOutfitIndexDataIndex = 0;
    this->TimeToPlayAgain = 1.00f;
    this->CurrentCharacterNameAudio = NULL;
}

