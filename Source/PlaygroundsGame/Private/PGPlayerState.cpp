#include "PGPlayerState.h"
#include "Net/UnrealNetwork.h"

void APGPlayerState::OnRep_HumanOrderIndex() {
}

void APGPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APGPlayerState, HumanOrderIndex);
}

APGPlayerState::APGPlayerState() {
    this->HumanOrderIndex = -1;
}

