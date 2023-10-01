#include "WWEGameStateSpecialMatch.h"
#include "Net/UnrealNetwork.h"

void AWWEGameStateSpecialMatch::OnRep_CountdownToSpawnReplicated() {
}

void AWWEGameStateSpecialMatch::MulticastSetTeamToPlayerSlot_Implementation(const int32 IndexPlayerSlot, const ESBTeam Team) {
}

void AWWEGameStateSpecialMatch::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWWEGameStateSpecialMatch, CountdownToSpawnReplicated);
}

AWWEGameStateSpecialMatch::AWWEGameStateSpecialMatch() {
    this->CountdownToSpawnReplicated = 0;
    this->CountdownToSpawn = 0;
    this->TimeDurationSecondsCountDown = 1.00f;
    this->MaxSecondsCountdownToSpawn = 60;
    this->IfThereAreFourWrestlersStopCountdownAt = 10;
    this->NumRandomWrestlersToSpawn = 10;
    this->NextRivalWidget = NULL;
    this->RivalsCounterWidget = NULL;
    this->MaxRivals = 0;
    this->bWantToLoadNextCharacter = false;
    this->bReadyToSpawnCharacter = false;
    this->bCharacterFinishInPhotomaton = false;
    this->PlayerSlotToSpawn = NULL;
}

