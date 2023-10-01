#include "NakamaClientWriteLeaderboardRecord.h"

UNakamaClientWriteLeaderboardRecord* UNakamaClientWriteLeaderboardRecord::WriteLeaderboardRecord(UNakamaClient* Client, UNakamaSession* Session, const FString& LeaderboardId, int64 Score, int64 SubScore, const FString& MetaData) {
    return NULL;
}

UNakamaClientWriteLeaderboardRecord::UNakamaClientWriteLeaderboardRecord() {
    this->NakamaClient = NULL;
    this->UserSession = NULL;
}

