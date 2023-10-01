#include "WWELobbyBaseGrid.h"

void UWWELobbyBaseGrid::UpdateArrows(FIntPoint Target) {
}

void UWWELobbyBaseGrid::InitArrowReferences(UWWEGridArrow* _UpArrow, UWWEGridArrow* _DownArrow) {
}

UWWELobbyBaseGrid::UWWELobbyBaseGrid() {
    this->LastSelectedSlot = NULL;
    this->UpArrow = NULL;
    this->DownArrow = NULL;
}

