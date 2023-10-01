#include "WWEMenuPowerUpsGrid.h"

UWWEMenuPowerUpsGrid::UWWEMenuPowerUpsGrid() {
    this->TierValue = 1;
    this->TierValueText = NULL;
    this->PowerUpsMenu = NULL;
    this->PowerUpToolTip = NULL;
    this->CachedSaveData = NULL;
    this->GridChosenContentSlot = NULL;
    this->GridSelectedContentSlot = NULL;
    this->MenuPowerUpsSelected = NULL;
    this->SimpleSlot_Selected = NULL;
    this->SimpleSlot_Unselected = NULL;
    this->GridTierType = EWWETierSlotType::TierOne;
}

