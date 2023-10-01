#include "PGLobbySlotOwnerData.h"

FPGLobbySlotOwnerData::FPGLobbySlotOwnerData() {
    this->PlayerId = 0;
    this->bIsAi = false;
    this->AiType = EPGLobbyAiType::PlayerAssigned_Teammate;
}

