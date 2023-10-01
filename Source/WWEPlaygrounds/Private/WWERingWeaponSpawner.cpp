#include "WWERingWeaponSpawner.h"
#include "Net/UnrealNetwork.h"

AWWERingWeaponSpawner* AWWERingWeaponSpawner::GetRingWeaponSpawner(const UObject* WorldContextObject) {
    return NULL;
}

bool AWWERingWeaponSpawner::CanActivateWeapon(const EWWEFightingStyle FightingStyle) const {
    return false;
}

AWWEInteractableWeapon* AWWERingWeaponSpawner::ActivateWeapon(EWWEFightingStyle FightingStyle) {
    return NULL;
}

void AWWERingWeaponSpawner::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWWERingWeaponSpawner, NumberOfWeaponsPulledOut);
    DOREPLIFETIME(AWWERingWeaponSpawner, bHasCooldownFinished);
}

AWWERingWeaponSpawner::AWWERingWeaponSpawner() {
    this->CooldownBetweenSpawns = 0.00f;
    this->NumberOfWeaponsPulledOut = 0;
    this->bHasCooldownFinished = true;
}

