#include "PGPlayerControllerLobby.h"
#include "Net/UnrealNetwork.h"

void APGPlayerControllerLobby::ServerSetReadyToTravel_Implementation(bool bNewReadyToTravel) {
}
bool APGPlayerControllerLobby::ServerSetReadyToTravel_Validate(bool bNewReadyToTravel) {
    return true;
}

void APGPlayerControllerLobby::ServerSetReadyToSyncInitialData_Implementation(bool bNewReadyToSyncInitialData) {
}
bool APGPlayerControllerLobby::ServerSetReadyToSyncInitialData_Validate(bool bNewReadyToSyncInitialData) {
    return true;
}

void APGPlayerControllerLobby::ServerSetReadyToSyncFinalData_Implementation(bool bNewReadyToSyncFinalData) {
}
bool APGPlayerControllerLobby::ServerSetReadyToSyncFinalData_Validate(bool bNewReadyToSyncFinalData) {
    return true;
}

void APGPlayerControllerLobby::ServerSetReadyToConfigure_Implementation(bool bNewReadyToConfigure) {
}
bool APGPlayerControllerLobby::ServerSetReadyToConfigure_Validate(bool bNewReadyToConfigure) {
    return true;
}

void APGPlayerControllerLobby::ServerSetLobbySlotStatus_Implementation(const TArray<int32>& SlotIndexArray, const TArray<FString>& LobbySlotsRawDataArray) {
}
bool APGPlayerControllerLobby::ServerSetLobbySlotStatus_Validate(const TArray<int32>& SlotIndexArray, const TArray<FString>& LobbySlotsRawDataArray) {
    return true;
}

void APGPlayerControllerLobby::ServerSetChampionshipInfo_Implementation(EPGChampionshipLeague League, uint8 Prestige, EPGChampionshipDivisionLevel DivisionLevel) {
}
bool APGPlayerControllerLobby::ServerSetChampionshipInfo_Validate(EPGChampionshipLeague League, uint8 Prestige, EPGChampionshipDivisionLevel DivisionLevel) {
    return true;
}

void APGPlayerControllerLobby::ServerSendPGRepSaveData_Implementation(const FPGSyncSaveData& RepSaveData) {
}
bool APGPlayerControllerLobby::ServerSendPGRepSaveData_Validate(const FPGSyncSaveData& RepSaveData) {
    return true;
}

void APGPlayerControllerLobby::ServerNotifyBalanceVersion_Implementation(int32 Version, bool bUpdated) {
}
bool APGPlayerControllerLobby::ServerNotifyBalanceVersion_Validate(int32 Version, bool bUpdated) {
    return true;
}

void APGPlayerControllerLobby::OnRep_ReadyToTravel() {
}

void APGPlayerControllerLobby::OnRep_ReadyToSyncInitialData() {
}

void APGPlayerControllerLobby::OnRep_ReadyToSyncFinalData() {
}

void APGPlayerControllerLobby::OnRep_ReadyToConfigure() {
}

void APGPlayerControllerLobby::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APGPlayerControllerLobby, bReadyToSyncInitialData);
    DOREPLIFETIME(APGPlayerControllerLobby, bReadyToConfigure);
    DOREPLIFETIME(APGPlayerControllerLobby, bReadyToSyncFinalData);
    DOREPLIFETIME(APGPlayerControllerLobby, bReadyToTravel);
}

APGPlayerControllerLobby::APGPlayerControllerLobby() {
    this->bReadyToSyncInitialData = false;
    this->bReadyToConfigure = false;
    this->bReadyToSyncFinalData = false;
    this->bReadyToTravel = false;
}

