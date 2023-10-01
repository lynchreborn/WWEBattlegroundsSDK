#include "WWETournamentData.h"

FWWETournamentData::FWWETournamentData() {
    this->bPreviousUserDataIsSetted = false;
    this->bPreviousUserDataIsConsumed = false;
    this->bRemoteUserDataValid = false;
    this->bRemoteUserPendingToUpdate = false;
    this->bActiveTournament = false;
    this->bRewardIsPendingToBeGiven = false;
}

