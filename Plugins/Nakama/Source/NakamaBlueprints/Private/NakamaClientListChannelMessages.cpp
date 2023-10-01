#include "NakamaClientListChannelMessages.h"

UNakamaClientListChannelMessages* UNakamaClientListChannelMessages::ListChannelMessages(UNakamaClient* Client, UNakamaSession* Session, const FString& ChannelId, int32 Limit, const FString& Cursor, bool Forward) {
    return NULL;
}

UNakamaClientListChannelMessages::UNakamaClientListChannelMessages() {
    this->NakamaClient = NULL;
    this->UserSession = NULL;
}

