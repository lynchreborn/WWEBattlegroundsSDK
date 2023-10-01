#include "WWEPlayerControllerLobby.h"

void AWWEPlayerControllerLobby::ServerSetPlayerData_Implementation(const FWWESyncPlayerData& NewPlayerData) {
}
bool AWWEPlayerControllerLobby::ServerSetPlayerData_Validate(const FWWESyncPlayerData& NewPlayerData) {
    return true;
}

void AWWEPlayerControllerLobby::ServerSendWWERepSaveData_Implementation(const FWWESyncSaveData& RepSaveData) {
}
bool AWWEPlayerControllerLobby::ServerSendWWERepSaveData_Validate(const FWWESyncSaveData& RepSaveData) {
    return true;
}

AWWEPlayerControllerLobby::AWWEPlayerControllerLobby() {
    this->LocalEditableArenaChampionshipMapId = 0;
}

