#include "WWEAction_ReceiveObjectHit.h"

void UWWEAction_ReceiveObjectHit::ServerPerformActionWithCustomParameters_Implementation(int32 Variation, bool bIsSignature, FVector _ObjectPosition, EWWETypeObjects _ObjectType, AActor* _Instigator) {
}
bool UWWEAction_ReceiveObjectHit::ServerPerformActionWithCustomParameters_Validate(int32 Variation, bool bIsSignature, FVector _ObjectPosition, EWWETypeObjects _ObjectType, AActor* _Instigator) {
    return true;
}

void UWWEAction_ReceiveObjectHit::MulticastPerformActionWithCustomParameters_Implementation(int32 Variation, bool bIsSignature, FVector _ObjectPosition, EWWETypeObjects _ObjectType, AActor* _Instigator) {
}

UWWEAction_ReceiveObjectHit::UWWEAction_ReceiveObjectHit() {
    this->ObjectType = EWWETypeObjects::None;
    this->CurrentStats = EWWEStats::MaximumHealth;
    this->bFlyingHit = false;
    this->VelocityAdjustLocation = 0.00f;
}

