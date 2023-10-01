#include "NakamaClientListTournamentRecords.h"

UNakamaClientListTournamentRecords* UNakamaClientListTournamentRecords::ListTournamentRecords(UNakamaClient* Client, UNakamaSession* Session, const FString& TournamentId, TArray<FString> OwnerIds, int32 Limit, const FString& Cursor, ENakamaLeaderboardListBy ListBy) {
    return NULL;
}

UNakamaClientListTournamentRecords::UNakamaClientListTournamentRecords() {
    this->NakamaClient = NULL;
    this->UserSession = NULL;
}

