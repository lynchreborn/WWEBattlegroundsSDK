#include "NakamaClientListLeaderboardRecords.h"

UNakamaClientListLeaderboardRecords* UNakamaClientListLeaderboardRecords::ListLeaderboardRecords(UNakamaClient* Client, UNakamaSession* Session, const FString& LeaderboardId, TArray<FString> OwnerIds, int32 Limit, const FString& Cursor, ENakamaLeaderboardListBy ListBy) {
    return NULL;
}

UNakamaClientListLeaderboardRecords::UNakamaClientListLeaderboardRecords() {
    this->NakamaClient = NULL;
    this->UserSession = NULL;
}

