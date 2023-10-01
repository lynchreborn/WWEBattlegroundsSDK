#include "WWEEntranceBox.h"
#include "Components/SkeletalMeshComponent.h"

void AWWEEntranceBox::SetBoxMesh(USkeletalMesh* _Mesh) {
}

void AWWEEntranceBox::SetBoxAnimation(UAnimationAsset* _Animation) {
}

void AWWEEntranceBox::PlayOpenBoxAnimation() {
}

AWWEEntranceBox::AWWEEntranceBox() {
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
}

