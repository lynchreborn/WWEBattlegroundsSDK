#include "WWESkeletalWeapon.h"
#include "Components/SkeletalMeshComponent.h"

AWWESkeletalWeapon::AWWESkeletalWeapon() {
    this->OverrideMaterial = NULL;
    this->MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComponentName"));
}

