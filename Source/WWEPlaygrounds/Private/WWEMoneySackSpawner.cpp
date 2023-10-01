#include "WWEMoneySackSpawner.h"

AWWEMoneySackSpawner::AWWEMoneySackSpawner() {
    this->DollarStackBlueprint = NULL;
    this->HangingMoneyBagBlueprint = NULL;
    this->HangingGoldBagBlueprint = NULL;
    this->DoubleSpawnChance = 0.30f;
    this->GoldBagChance = 0.10f;
    this->LastSpawnDistanceProbabilityFactor = 500.00f;
    this->LastSpawnPointsStackSize = 3;
    this->MinSpawnInterval = 2.00f;
    this->MaxSpawnInterval = 4.00f;
    this->SpawnCooldown = 0.00f;
    this->RealPoolSize = 0;
}

