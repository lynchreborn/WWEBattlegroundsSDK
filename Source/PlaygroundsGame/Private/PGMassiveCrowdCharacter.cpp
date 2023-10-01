#include "PGMassiveCrowdCharacter.h"
#include "Components/InstancedStaticMeshComponent.h"

APGMassiveCrowdCharacter::APGMassiveCrowdCharacter() {
    this->InstancedStaticMeshComp = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("InstancedStaticMeshComp"));
}

