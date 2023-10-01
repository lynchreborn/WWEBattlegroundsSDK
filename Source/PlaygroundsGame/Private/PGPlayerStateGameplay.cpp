#include "PGPlayerStateGameplay.h"
#include "Net/UnrealNetwork.h"

void APGPlayerStateGameplay::OnRep_PlayerSlotIndex() {
}

ESBTeam APGPlayerStateGameplay::GetTeam() const {
    return ESBTeam::Team01;
}

void APGPlayerStateGameplay::CharacterReadPlayerSlot() {
}

void APGPlayerStateGameplay::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APGPlayerStateGameplay, PlayerSlotIndex);
    DOREPLIFETIME(APGPlayerStateGameplay, bHotJoining);
    DOREPLIFETIME(APGPlayerStateGameplay, bHotJoined);
}

APGPlayerStateGameplay::APGPlayerStateGameplay() {
    this->PlayerSlotIndex = -1;
    this->bHotJoining = false;
    this->bHotJoined = false;
}

