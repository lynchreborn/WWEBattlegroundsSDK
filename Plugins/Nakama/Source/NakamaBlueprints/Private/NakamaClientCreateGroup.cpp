#include "NakamaClientCreateGroup.h"

UNakamaClientCreateGroup* UNakamaClientCreateGroup::CreateGroup(UNakamaClient* Client, UNakamaSession* Session, const FString& GroupName, const FString& Description, const FString& AvatarUrl, const FString& LanguageTag, bool Open, int32 MaxMembers) {
    return NULL;
}

UNakamaClientCreateGroup::UNakamaClientCreateGroup() {
    this->NakamaClient = NULL;
    this->UserSession = NULL;
}

