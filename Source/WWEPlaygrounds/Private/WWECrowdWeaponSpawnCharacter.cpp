#include "WWECrowdWeaponSpawnCharacter.h"

void AWWECrowdWeaponSpawnCharacter::SpawnInteractableWeapon() {
}

void AWWECrowdWeaponSpawnCharacter::SetIsWaitingAfterSpawningWeapon(bool bIsWaiting) {
}

void AWWECrowdWeaponSpawnCharacter::MulticastSpawnInteractableWeapon_Implementation() {
}

AWWECrowdWeaponSpawnCharacter::AWWECrowdWeaponSpawnCharacter() {
    this->Spawner = NULL;
    this->MinTimeToWaitAfterSpawning = 0.00f;
    this->MaxTimeToWaitAfterSpawning = 0.00f;
    this->MinTimeToWaitAfterBeingReady = 0.00f;
    this->MaxTimeToWaitAfterBeingReady = 0.00f;
    this->bWaitForCharacterGrabLastWeapon = true;
    this->bSpawnOnlyWhenCharacterIsRendered = false;
    this->bShouldLastWeaponHaveDespawned = true;
    this->MaximumNumberOfWeaponsToSpawnAnother = 1;
    this->MinimumDistanceToAnyPlayerToSpawnWeapon = 0.00f;
    this->LastInteractableWeaponInGame = NULL;
}

