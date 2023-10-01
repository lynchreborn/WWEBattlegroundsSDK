#include "WWEAction_PowerUpGodOfThunder.h"

void UWWEAction_PowerUpGodOfThunder::UpdateThunderCount() {
}

void UWWEAction_PowerUpGodOfThunder::MulticastSpawnThunder_Implementation(FVector Location) {
}

UWWEAction_PowerUpGodOfThunder::UWWEAction_PowerUpGodOfThunder() {
    this->HowManyThunders = 5;
    this->TimeToEnd = 2.50f;
    this->RadiusThunder = 50.00f;
    this->RandomRadiusThunderAroundRivalsCharacter = 250.00f;
    this->CurrentThunderCount = 0;
    this->HowManyHits = 0;
}

