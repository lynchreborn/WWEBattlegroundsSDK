#include "WWEAction_ReceiveHitStunnedRopes.h"

void UWWEAction_ReceiveHitStunnedRopes::OnTimeEnd() {
}

UWWEAction_ReceiveHitStunnedRopes::UWWEAction_ReceiveHitStunnedRopes() {
    this->MaxDistance = 100.00f;
    this->TimeToEndAction = 2.00f;
}

