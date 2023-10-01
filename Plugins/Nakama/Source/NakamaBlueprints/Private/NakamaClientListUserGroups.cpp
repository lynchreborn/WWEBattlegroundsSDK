#include "NakamaClientListUserGroups.h"

UNakamaClientListUserGroups* UNakamaClientListUserGroups::ListUserGroups(UNakamaClient* Client, UNakamaSession* Session, const FString& UserID, int32 Limit, ENakamaGroupState State, const FString& Cursor) {
    return NULL;
}

UNakamaClientListUserGroups::UNakamaClientListUserGroups() {
    this->NakamaClient = NULL;
    this->UserSession = NULL;
}

