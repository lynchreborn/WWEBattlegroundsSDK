#include "NakamaClientLinkCustom.h"

UNakamaClientLinkCustom* UNakamaClientLinkCustom::LinkCustom(UNakamaClient* Client, UNakamaSession* Session, const FString& CustomId) {
    return NULL;
}

UNakamaClientLinkCustom::UNakamaClientLinkCustom() {
    this->NakamaClient = NULL;
    this->UserSession = NULL;
}

