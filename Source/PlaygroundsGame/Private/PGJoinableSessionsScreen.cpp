#include "PGJoinableSessionsScreen.h"

void UPGJoinableSessionsScreen::OnMessageBoxErrorClosed() {
}

UPGJoinableSessionsScreen::UPGJoinableSessionsScreen() {
    this->JoineableSessionGridElementClass = NULL;
    this->MenuGrid = NULL;
    this->UpArrow = NULL;
    this->DownArrow = NULL;
    this->bTriedToJoinSession = false;
    this->TimeToCallFriendsAPI = 0.00f;
    this->TimeToCallFindSessions = 0.00f;
}

