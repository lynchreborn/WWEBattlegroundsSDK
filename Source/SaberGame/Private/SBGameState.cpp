#include "SBGameState.h"
#include "Net/UnrealNetwork.h"

void ASBGameState::SetWaitingState(ESBWaitingGameState NewState) {
}

void ASBGameState::OnRep_WaitingState() {
}

bool ASBGameState::IsOnlineGame() const {
    return false;
}

ESBWaitingGameState ASBGameState::GetWaitingState() const {
    return ESBWaitingGameState::Undefined;
}

void ASBGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBGameState, ReplicatedWaitingState);
}

ASBGameState::ASBGameState() {
    this->WaitingState = ESBWaitingGameState::Undefined;
    this->ReplicatedWaitingState = ESBWaitingGameState::Undefined;
}

