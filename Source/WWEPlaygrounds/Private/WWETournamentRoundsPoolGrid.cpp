#include "WWETournamentRoundsPoolGrid.h"

void UWWETournamentRoundsPoolGrid::ScrollCenter() {
}

void UWWETournamentRoundsPoolGrid::Scroll() {
}

UWWETournamentRoundsPoolGrid::UWWETournamentRoundsPoolGrid() {
    this->NormalRoundClass = NULL;
    this->FinalRoundClass = NULL;
    this->MaxNumberOfElementsOnScreen = 0;
    this->EnableTest = false;
    this->NumberOfElementsOnScreen = 0;
    this->Round = 0;
    this->ScrollOffset = 0;
    this->TournamentScreen = NULL;
}

