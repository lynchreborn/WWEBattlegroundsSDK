#include "WWEGameStateGameplay.h"
#include "Net/UnrealNetwork.h"

void AWWEGameStateGameplay::OnRep_GameplayState() {
}

void AWWEGameStateGameplay::MulticastSetPlayersRewards_Implementation(bool bWasSuccessful, const FString& PlayerRewards) {
}

void AWWEGameStateGameplay::MulticastClientShutdownNetwork_Implementation() {
}

void AWWEGameStateGameplay::MulticastClientOnResultsScreenPlayAgainPressed_Implementation() {
}

void AWWEGameStateGameplay::MulticastClientFadeOutToLobby_Implementation() {
}

void AWWEGameStateGameplay::InitGameplaySettings() {
}

void AWWEGameStateGameplay::GameplayValidateMatch() {
}

void AWWEGameStateGameplay::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWWEGameStateGameplay, GameplayState);
}

AWWEGameStateGameplay::AWWEGameStateGameplay() {
    this->GameplayState = EWWEGameplayState::None;
    this->CurrentCameraInUse = 0;
    this->AmbientSoundMusic = NULL;
    this->BlackWidget = NULL;
}

