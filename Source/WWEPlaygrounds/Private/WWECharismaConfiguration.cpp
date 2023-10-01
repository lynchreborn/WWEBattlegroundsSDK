#include "WWECharismaConfiguration.h"

UWWECharismaConfiguration::UWWECharismaConfiguration() {
    this->MaximumCharisma = 500;
    this->MinimumCharisma = 0;
    this->InitialCharisma = 0;
    this->NumberOfFulfillableActions = 2;
    this->NumberOfActionsUntilRepeat = 10;
    this->InitialTooltipsDelay = 5.00f;
    this->InGameTooltipsDelay = 2.00f;
    this->PrepareToRemoveTooltipAnimationTime = 6.00f;
    this->RemoveTooltipAnimationTime = 2.00f;
    this->BarChangeAnimationTime = 0.00f;
    this->LockFlickerTime = 5.00f;
    this->LockFastFlickerTime = 1.00f;
    this->LoseCharismaForInactivityTime = 1.00f;
    this->LoseCharismaPointsForInactivity = -5;
}

