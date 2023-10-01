#include "NakamaClientRPC.h"

UNakamaClientRPC* UNakamaClientRPC::RPC(UNakamaClient* Client, UNakamaSession* Session, const FString& FunctionId, const FString& Payload) {
    return NULL;
}

UNakamaClientRPC::UNakamaClientRPC() {
    this->NakamaClient = NULL;
    this->UserSession = NULL;
}

