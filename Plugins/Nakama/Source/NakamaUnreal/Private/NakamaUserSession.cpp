#include "NakamaUserSession.h"

FNakamaUserSession::FNakamaUserSession() {
    this->IsCreated = false;
    this->IsExpired = false;
    this->IsRefreshExpired = false;
}

