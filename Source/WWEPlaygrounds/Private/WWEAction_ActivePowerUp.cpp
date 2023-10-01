#include "WWEAction_ActivePowerUp.h"

void UWWEAction_ActivePowerUp::ServerPerformActivePowerUp_Implementation(int32 Variation, bool bIsSignature, EWWETierSlotType Tier) {
}
bool UWWEAction_ActivePowerUp::ServerPerformActivePowerUp_Validate(int32 Variation, bool bIsSignature, EWWETierSlotType Tier) {
    return true;
}

void UWWEAction_ActivePowerUp::MulticastPerformActivePowerUp_Implementation(int32 Variation, bool bIsSignature, EWWETierSlotType Tier) {
}

UWWEAction_ActivePowerUp::UWWEAction_ActivePowerUp() {
    this->CurrentTier = EWWETierSlotType::NONE;
    this->NextTier = EWWETierSlotType::NONE;
}

