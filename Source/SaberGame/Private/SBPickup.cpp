#include "SBPickup.h"
#include "Components/StaticMeshComponent.h"

void ASBPickup::WasCollected() {
}

void ASBPickup::SetActive(bool bNewPickupState) {
}

bool ASBPickup::IsActive() const {
    return false;
}

FString ASBPickup::GetItemID() const {
    return TEXT("");
}

ASBPickup::ASBPickup() {
    this->bIsActive = true;
    this->PickupMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PickupMesh"));
    this->ItemID = TEXT("UNKNOWN, not specified");
}

