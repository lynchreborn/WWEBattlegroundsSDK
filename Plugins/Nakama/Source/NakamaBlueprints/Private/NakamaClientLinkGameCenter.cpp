#include "NakamaClientLinkGameCenter.h"

UNakamaClientLinkGameCenter* UNakamaClientLinkGameCenter::LinkGameCenter(UNakamaClient* Client, UNakamaSession* Session, const FString& PlayerId, const FString& BundleId, int64 TimeStampSeconds, const FString& Salt, const FString& Signature, const FString& PublicKeyUrl) {
    return NULL;
}

UNakamaClientLinkGameCenter::UNakamaClientLinkGameCenter() {
    this->NakamaClient = NULL;
    this->UserSession = NULL;
}

