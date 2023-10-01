#include "PGPlayerControllerGameplay.h"

void APGPlayerControllerGameplay::TryToPauseGame() {
}

void APGPlayerControllerGameplay::SurrenderGame() {
}

void APGPlayerControllerGameplay::ServerSurrenderGame_Implementation() {
}
bool APGPlayerControllerGameplay::ServerSurrenderGame_Validate() {
    return true;
}

void APGPlayerControllerGameplay::ServerSetReadyToStartMatch_Implementation() {
}
bool APGPlayerControllerGameplay::ServerSetReadyToStartMatch_Validate() {
    return true;
}

void APGPlayerControllerGameplay::ServerSetReadyToSpawnActors_Implementation() {
}
bool APGPlayerControllerGameplay::ServerSetReadyToSpawnActors_Validate() {
    return true;
}

void APGPlayerControllerGameplay::ServerSetReadyForHotJoin_Implementation() {
}
bool APGPlayerControllerGameplay::ServerSetReadyForHotJoin_Validate() {
    return true;
}

void APGPlayerControllerGameplay::ServerSetHotJoined_Implementation() {
}
bool APGPlayerControllerGameplay::ServerSetHotJoined_Validate() {
    return true;
}

void APGPlayerControllerGameplay::ServerSendGameplayPlayerSlotsPG_Implementation(const TArray<FPGRepGameplayPlayerSlot>& RepGameplayPlayerSlots) {
}
bool APGPlayerControllerGameplay::ServerSendGameplayPlayerSlotsPG_Validate(const TArray<FPGRepGameplayPlayerSlot>& RepGameplayPlayerSlots) {
    return true;
}

void APGPlayerControllerGameplay::ServerForceRestartPlayer_Implementation() {
}
bool APGPlayerControllerGameplay::ServerForceRestartPlayer_Validate() {
    return true;
}

ESBTeam APGPlayerControllerGameplay::GetTeam() const {
    return ESBTeam::Team01;
}

void APGPlayerControllerGameplay::Debug_ServerToggleSlomo_Implementation() {
}
bool APGPlayerControllerGameplay::Debug_ServerToggleSlomo_Validate() {
    return true;
}

void APGPlayerControllerGameplay::ClientSendGameplayPlayerSlotsPG_Implementation(const TArray<FPGRepGameplayPlayerSlot>& RepGameplayPlayerSlots) {
}

APGPlayerControllerGameplay::APGPlayerControllerGameplay() {
}

