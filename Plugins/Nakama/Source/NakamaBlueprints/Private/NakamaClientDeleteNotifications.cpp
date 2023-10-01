#include "NakamaClientDeleteNotifications.h"

UNakamaClientDeleteNotifications* UNakamaClientDeleteNotifications::DeleteNotifications(UNakamaClient* Client, UNakamaSession* Session, TArray<FString> NotificationIds) {
    return NULL;
}

UNakamaClientDeleteNotifications::UNakamaClientDeleteNotifications() {
    this->NakamaClient = NULL;
    this->UserSession = NULL;
}

