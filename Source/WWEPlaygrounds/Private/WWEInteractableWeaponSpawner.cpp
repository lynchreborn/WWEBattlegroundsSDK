#include "WWEInteractableWeaponSpawner.h"

AWWEInteractableWeaponSpawner::AWWEInteractableWeaponSpawner() {
    this->PoolSize = 0;
    this->InteractableWeaponClass = NULL;
    this->InitialWeaponState = EWWEWeaponState::PhysicSimulation;
}

