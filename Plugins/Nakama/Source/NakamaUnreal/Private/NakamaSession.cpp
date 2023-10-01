#include "NakamaSession.h"

void UNakamaSession::RestoreSession(const FString& Token, const FString& RefreshToken) {
}

bool UNakamaSession::IsRefreshExpired(FDateTime Time) {
    return false;
}

bool UNakamaSession::IsExpired(FDateTime Time) {
    return false;
}

bool UNakamaSession::IsCreated() {
    return false;
}

FString UNakamaSession::GetVariable(const FString& Name) {
    return TEXT("");
}

UNakamaSession::UNakamaSession() {
}

