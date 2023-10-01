#include "NakamaClientListNotifications.h"

UNakamaClientListNotifications* UNakamaClientListNotifications::ListNotifications(UNakamaClient* Client, UNakamaSession* Session, int32 Limit, const FString& Cursor) {
    return NULL;
}

UNakamaClientListNotifications::UNakamaClientListNotifications() {
    this->NakamaClient = NULL;
    this->UserSession = NULL;
}

