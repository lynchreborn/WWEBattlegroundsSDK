#include "WWECrosshair.h"

void UWWECrosshair::ServerSetComponentLocation_Implementation(FVector Location) {
}
bool UWWECrosshair::ServerSetComponentLocation_Validate(FVector Location) {
    return true;
}

void UWWECrosshair::MulticastSetComponentLocation_Implementation(FVector Location) {
}

UWWECrosshair::UWWECrosshair() {
    this->VisualsClass = NULL;
    this->RingYDimension = 0.00f;
    this->Visuals = NULL;
    this->CurrentSpeed = 0.00f;
}

