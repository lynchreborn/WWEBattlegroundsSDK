#include "WWEKingOfTheRingPlayerStats.h"

void UWWEKingOfTheRingPlayerStats::BroadcastOutPlayerAnimationFinished() {
}

void UWWEKingOfTheRingPlayerStats::BroadcastInPlayerAnimationFinished() {
}

UWWEKingOfTheRingPlayerStats::UWWEKingOfTheRingPlayerStats() {
    this->SlotOnTheRing = NULL;
    this->SlotWaiting = NULL;
    this->Stat_RecordTime = NULL;
    this->Stat_RecordThrownOuts = NULL;
    this->Stat_CurrentTime = NULL;
    this->Stat_CurrentThrownOuts = NULL;
    this->WrestlerInfo = NULL;
    this->PlayerSlot = NULL;
    this->PlayerSlotCountdown = NULL;
    this->WrestlerCharacterPortrait = NULL;
    this->StatsCanvasPanel = NULL;
    this->PlayerOutAnimation = NULL;
    this->PlayerInAnimation = NULL;
    this->PlayerToOnTheRingAnimation = NULL;
    this->WidgetAnimationCurve = NULL;
}

