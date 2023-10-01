#include "NakamaClientListtorageObjects.h"

UNakamaClientListtorageObjects* UNakamaClientListtorageObjects::ListStorageObjects(UNakamaClient* Client, UNakamaSession* Session, const FString& Collection, const FString& UserID, int32 Limit, const FString& Cursor) {
    return NULL;
}

UNakamaClientListtorageObjects::UNakamaClientListtorageObjects() {
    this->NakamaClient = NULL;
    this->UserSession = NULL;
}

