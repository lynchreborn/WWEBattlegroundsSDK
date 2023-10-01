#include "WWEPlayerStateGameplay.h"
#include "Net/UnrealNetwork.h"

void AWWEPlayerStateGameplay::OnRep_NumKickOuts() {
}

void AWWEPlayerStateGameplay::MulticastCharacterReadPlayerSlotAndCacheEnvironmentData_Implementation() {
}

void AWWEPlayerStateGameplay::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWWEPlayerStateGameplay, WorldTimeEntryRing);
    DOREPLIFETIME(AWWEPlayerStateGameplay, CurrentTimeOnRing);
    DOREPLIFETIME(AWWEPlayerStateGameplay, RecordTimeOnRing);
    DOREPLIFETIME(AWWEPlayerStateGameplay, RecordKickOuts);
    DOREPLIFETIME(AWWEPlayerStateGameplay, NumKickOuts);
    DOREPLIFETIME(AWWEPlayerStateGameplay, CachedUniqueIdLeftPlayer);
    DOREPLIFETIME(AWWEPlayerStateGameplay, CachedSessionIdLeftPlayer);
    DOREPLIFETIME(AWWEPlayerStateGameplay, bKing);
}

AWWEPlayerStateGameplay::AWWEPlayerStateGameplay() {
    this->WorldTimeEntryRing = 0.00f;
    this->CurrentTimeOnRing = 0.00f;
    this->RecordTimeOnRing = 0;
    this->RecordKickOuts = 0;
    this->NumKickOuts = 0;
    this->bKing = false;
}

