#include "NakamaClientListTournaments.h"

UNakamaClientListTournaments* UNakamaClientListTournaments::ListTournaments(UNakamaClient* Client, UNakamaSession* Session, int32 CategoryStart, int32 CategoryEnd, int32 StartTime, int32 EndTime, int32 Limit, const FString& Cursor) {
    return NULL;
}

UNakamaClientListTournaments::UNakamaClientListTournaments() {
    this->NakamaClient = NULL;
    this->UserSession = NULL;
}

