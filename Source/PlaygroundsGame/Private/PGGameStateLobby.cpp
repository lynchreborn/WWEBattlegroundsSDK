#include "PGGameStateLobby.h"
#include "Net/UnrealNetwork.h"

void APGGameStateLobby::SyncingFinalDataTimer() {
}

void APGGameStateLobby::OnRep_TimerCountdownTime() {
}

void APGGameStateLobby::MulticastNotifyNegotiatedBalanceVersion_Implementation(int32 NegotiatedBalanceVersion) {
}

void APGGameStateLobby::MulticastDenySetLobbySlotStatus_Implementation(int32 SenderPlayerId) {
}

void APGGameStateLobby::MulticastAllowSetLobbySlotStatus_Implementation(int32 SenderPlayerId, const TArray<int32>& SlotIndexArray, const TArray<FString>& LobbySlotRawDataArray) {
}

void APGGameStateLobby::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APGGameStateLobby, TimerCountdownTime);
}

APGGameStateLobby::APGGameStateLobby() {
    this->SyncingFinalDataTime = 5;
    this->TimerCountdownTime = 99;
}

