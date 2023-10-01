#include "WWEBarrel.h"
#include "PhysicsEngine/RadialForceComponent.h"
#include "Components/SphereComponent.h"

AWWEBarrel::AWWEBarrel() {
    this->ExplosionCollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("ExplosionCollisionComponent"));
    this->ForceComponent = CreateDefaultSubobject<URadialForceComponent>(TEXT("ForceComponent"));
    this->ExplosionCollisionRadius = 150.00f;
    this->ExplosionCountdown = 15.00f;
    this->ExplosionShakeName = TEXT("ShakeHeavy");
    this->bIsBurningWick = false;
    this->WeaponRadius = 0.00f;
    this->WeaponHalfHeight = 0.00f;
}

