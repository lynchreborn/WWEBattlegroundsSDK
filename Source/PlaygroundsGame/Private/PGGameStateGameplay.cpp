#include "PGGameStateGameplay.h"
#include "Net/UnrealNetwork.h"

bool APGGameStateGameplay::TeamScoresAreZero() const {
    return false;
}

bool APGGameStateGameplay::TeamScoresAreEqual() const {
    return false;
}

bool APGGameStateGameplay::TeamRoundsAreZero() const {
    return false;
}

bool APGGameStateGameplay::TeamRoundsAreEqual() const {
    return false;
}

void APGGameStateGameplay::SetSurrenderTeam(ESBTeam SurrenderTeamIn) {
}

void APGGameStateGameplay::ResetTeamScores() {
}

void APGGameStateGameplay::ResetTeamRounds() {
}

void APGGameStateGameplay::OnRep_TeamScores() {
}

void APGGameStateGameplay::OnRep_TeamRounds() {
}

void APGGameStateGameplay::OnRep_TeamCurrencies() {
}

void APGGameStateGameplay::OnRep_SurrenderTeam() {
}

void APGGameStateGameplay::MulticastAddPlayerSlotsPG_Implementation(const TArray<FPGRepGameplayPlayerSlot>& RepGameplayPlayerSlots) {
}

ESBTeam APGGameStateGameplay::GetWinningTeam(bool bIgnoreRounds, bool bIgnoreSurrender) const {
    return ESBTeam::Team01;
}

int32 APGGameStateGameplay::GetTotalRoundsPlayed() const {
    return 0;
}

ESBTeam APGGameStateGameplay::GetSurrenderTeam() const {
    return ESBTeam::Team01;
}

ESBTeam APGGameStateGameplay::GetLosingTeam(bool bIgnoreRounds, bool bIgnoreSurrender) const {
    return ESBTeam::Team01;
}

void APGGameStateGameplay::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APGGameStateGameplay, TeamScores);
    DOREPLIFETIME(APGGameStateGameplay, TeamRounds);
    DOREPLIFETIME(APGGameStateGameplay, TeamCurrencies);
    DOREPLIFETIME(APGGameStateGameplay, RemainingTime);
    DOREPLIFETIME(APGGameStateGameplay, SurrenderTeam);
}

APGGameStateGameplay::APGGameStateGameplay() {
    this->StartupSequenceActor = NULL;
    this->CrowdManager = NULL;
    this->RemainingTime = 0;
    this->bWantsToStartMatch = false;
    this->SurrenderTeam = ESBTeam::None;
    this->bSpawnPawns = true;
    this->bWasSendGameplayPlayerSlots = false;
    this->bWasReceivedGameplayPlayerSlots = false;
}

