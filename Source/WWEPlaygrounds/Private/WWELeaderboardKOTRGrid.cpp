#include "WWELeaderboardKOTRGrid.h"

UWWELeaderboardKOTRGrid::UWWELeaderboardKOTRGrid() {
    this->UpArrow = NULL;
    this->DownArrow = NULL;
    this->MaxScrollPositionY = 0;
    this->LastDirection = EUINavigation::Left;
    this->NextLoadPoint = 0;
    this->SizeToNextLoad = 0;
}

