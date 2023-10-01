#include "NakamaClientGetUsers.h"

UNakamaClientGetUsers* UNakamaClientGetUsers::GetUsers(UNakamaClient* Client, UNakamaSession* Session, TArray<FString> UserIds, TArray<FString> Usernames, TArray<FString> FacebookIds) {
    return NULL;
}

UNakamaClientGetUsers::UNakamaClientGetUsers() {
    this->NakamaClient = NULL;
    this->UserSession = NULL;
}

