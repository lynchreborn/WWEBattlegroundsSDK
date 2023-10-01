#include "NakamaClientAddGroupUsers.h"

UNakamaClientAddGroupUsers* UNakamaClientAddGroupUsers::AddGroupUsers(UNakamaClient* Client, UNakamaSession* Session, const FString& GroupId, TArray<FString> UserIds) {
    return NULL;
}

UNakamaClientAddGroupUsers::UNakamaClientAddGroupUsers() {
    this->NakamaClient = NULL;
    this->UserSession = NULL;
}

