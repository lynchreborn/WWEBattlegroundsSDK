#include "WWEStandaloneWeaponSpawner.h"
#include "Net/UnrealNetwork.h"

void AWWEStandaloneWeaponSpawner::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWWEStandaloneWeaponSpawner, InteractableWeaponOnSpawnPoint);
}

AWWEStandaloneWeaponSpawner::AWWEStandaloneWeaponSpawner() {
    this->InitialSpawnTime = 10.00f;
    this->CooldownTime = 60.00f;
    this->bSpawnWhenNotInFrustum = false;
    this->bAllowSpawnIfSpawnPointIsOccupied = false;
    this->InteractableWeaponParameter = NULL;
    this->InteractableWeaponOnSpawnPoint = NULL;
    this->bFirstWeaponSpawnRequested = false;
    this->bFirstWeaponSpawnDone = false;
}

