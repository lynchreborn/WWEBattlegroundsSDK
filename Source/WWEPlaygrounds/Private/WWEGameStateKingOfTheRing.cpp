#include "WWEGameStateKingOfTheRing.h"
#include "Net/UnrealNetwork.h"

void AWWEGameStateKingOfTheRing::UpdateKOTBCountdown() {
}

void AWWEGameStateKingOfTheRing::ServerDestroyCharacterWhenReady(UWWEActionNode* ActionNode, EWWEActionNodeResult Result, bool bFirstActionOfStack) {
}

void AWWEGameStateKingOfTheRing::ResetCounter(bool bFirstTime) {
}

void AWWEGameStateKingOfTheRing::OnRep_PlayerToRingCountdownTime() {
}

void AWWEGameStateKingOfTheRing::OnRep_OnRingPlayerStates() {
}

void AWWEGameStateKingOfTheRing::OnRep_NextPlayerIdToFight() {
}

void AWWEGameStateKingOfTheRing::OnRep_CountdownTimerUpdated() {
}

void AWWEGameStateKingOfTheRing::MulticastShowResetRewardsOnEndCountdown_Implementation(int32 PlayerId) {
}

void AWWEGameStateKingOfTheRing::MulticastSetPlayerWinning_Implementation(AWWEPlayerStateGameplay* WinnerPlayerState) {
}

void AWWEGameStateKingOfTheRing::MulticastResetPlayerStateStats_Implementation() {
}

void AWWEGameStateKingOfTheRing::MulticastPlayerWaitingToRing_Implementation(AWWEPlayerStateGameplay* PlayerState) {
}

void AWWEGameStateKingOfTheRing::MulticastPlayerFinishMatch_Implementation(AWWEPlayerStateGameplay* PlayerState) {
}

void AWWEGameStateKingOfTheRing::MulticastOnClearSlot_Implementation(int32 PlayerSlotId) {
}

void AWWEGameStateKingOfTheRing::MulticastOnCharacterLoseGame_Implementation(ESBTeam _Team, AWWECharacterCombat* Character, AWWEPlayerStateGameplay* PlayerState) {
}

void AWWEGameStateKingOfTheRing::MulticastDestroyCharacterWhenReady_Implementation(AWWECharacterCombat* CharacterCombat, const bool bForceDestroy) {
}

void AWWEGameStateKingOfTheRing::MulticastAddPlayerToWainting_Implementation(AWWEPlayerStateGameplay* PlayerState) {
}

void AWWEGameStateKingOfTheRing::MulticastAddPlayerToRing_Implementation(AWWEPlayerStateGameplay* PlayerState, const bool bFromHotjoin) {
}

void AWWEGameStateKingOfTheRing::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWWEGameStateKingOfTheRing, NextPlayerIdToFight);
    DOREPLIFETIME(AWWEGameStateKingOfTheRing, HotjoinPlayerIdToFight);
    DOREPLIFETIME(AWWEGameStateKingOfTheRing, OnRingPlayerStates);
    DOREPLIFETIME(AWWEGameStateKingOfTheRing, OnWaitingPlayerStates);
    DOREPLIFETIME(AWWEGameStateKingOfTheRing, PlayerToRingCountdownTime);
    DOREPLIFETIME(AWWEGameStateKingOfTheRing, CountdownTimer);
}

AWWEGameStateKingOfTheRing::AWWEGameStateKingOfTheRing() {
    this->MaxPlayersFighting = 2;
    this->PointsForSecond = 1.00f;
    this->NextPlayerIdToFight = -1;
    this->HotjoinPlayerIdToFight = -1;
    this->PlayerToRingCountdownTime = 0;
    this->TimeToTeleportNextFighter = 0.50f;
    this->TimeDoingTeleportToRing = 0.50f;
    this->TimeHotjoinToRing = 5.00f;
    this->TimeDelayTeleportToRing = 0.50f;
    this->HUDKingOfTheRingWidget = NULL;
    this->bHotjoinCountdownActive = false;
    this->bCountdownActive = false;
    this->CountdownTimer = 0;
}

