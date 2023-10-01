#include "NakamaClientListMatches.h"

UNakamaClientListMatches* UNakamaClientListMatches::ListMatches(UNakamaClient* Client, UNakamaSession* Session, int32 MinSize, int32 MaxSize, int32 Limit, const FString& Label, bool Authoritative) {
    return NULL;
}

UNakamaClientListMatches::UNakamaClientListMatches() {
    this->NakamaClient = NULL;
    this->UserSession = NULL;
}

