#include "NakamaManager.h"

void UNakamaManager::OnRtError(const FNakamaRtError& ErrorData) {
}

void UNakamaManager::OnRtConnected() {
}

void UNakamaManager::OnReceivedNotification(const FNakamaNotificationList& NotificationList) {
}

void UNakamaManager::OnAuthenticationSuccess(UNakamaSession* LoginData) {
}

void UNakamaManager::OnAuthenticationError(const FNakamaError& ErrorData) {
}

UNakamaManager::UNakamaManager() {
    this->NakamaClient = NULL;
    this->NakamaRtClient = NULL;
}

