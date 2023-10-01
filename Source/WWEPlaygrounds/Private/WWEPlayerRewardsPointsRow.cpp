#include "WWEPlayerRewardsPointsRow.h"

void UWWEPlayerRewardsPointsRow::SetValidColumns(bool FirstValue, bool SecondValue) {
}

void UWWEPlayerRewardsPointsRow::SetRowCategory(FText CategoryText) {
}

void UWWEPlayerRewardsPointsRow::SetColumnValues(int32 FirstValue, int32 SecondValue) {
}

void UWWEPlayerRewardsPointsRow::SetColumnState(bool IsValid, USBStylizedText* ColumnPoints, UImage* ColumnInvalid) {
}

UWWEPlayerRewardsPointsRow::UWWEPlayerRewardsPointsRow() {
    this->Category = NULL;
    this->FirstColumnPoints = NULL;
    this->SecondColumnPoints = NULL;
    this->FirstColumnInvalid = NULL;
    this->SecondColumnInvalid = NULL;
}

