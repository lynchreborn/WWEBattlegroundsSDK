#include "NakamaClientGetFriends.h"

UNakamaClientGetFriends* UNakamaClientGetFriends::GetFriends(UNakamaClient* Client, UNakamaSession* Session, int32 Limit, ENakamaFriendState State, const FString& Cursor) {
    return NULL;
}

UNakamaClientGetFriends::UNakamaClientGetFriends() {
    this->NakamaClient = NULL;
    this->UserSession = NULL;
}

