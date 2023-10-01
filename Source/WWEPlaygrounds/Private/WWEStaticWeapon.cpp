#include "WWEStaticWeapon.h"
#include "Components/StaticMeshComponent.h"

AWWEStaticWeapon::AWWEStaticWeapon() {
    this->DestroyedMeshesClass = NULL;
    this->Impulse = 500.00f;
    this->MinimumAngularImpulse = 0.00f;
    this->MaximumAngularImpulse = 50.00f;
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponentName"));
}

