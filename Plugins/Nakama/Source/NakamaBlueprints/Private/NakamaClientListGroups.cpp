#include "NakamaClientListGroups.h"

UNakamaClientListGroups* UNakamaClientListGroups::ListGroups(UNakamaClient* Client, UNakamaSession* Session, const FString& GroupNameFilter, int32 Limit, const FString& Cursor) {
    return NULL;
}

UNakamaClientListGroups::UNakamaClientListGroups() {
    this->NakamaClient = NULL;
    this->UserSession = NULL;
}

