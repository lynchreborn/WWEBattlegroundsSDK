#include "NakamaClientKickGroupUsers.h"

UNakamaClientKickGroupUsers* UNakamaClientKickGroupUsers::KickGroupUsers(UNakamaClient* Client, UNakamaSession* Session, const FString& GroupId, TArray<FString> UserIds) {
    return NULL;
}

UNakamaClientKickGroupUsers::UNakamaClientKickGroupUsers() {
    this->NakamaClient = NULL;
    this->UserSession = NULL;
}

