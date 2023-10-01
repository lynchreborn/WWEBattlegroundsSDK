#include "WWEAction_GoToApron.h"

void UWWEAction_GoToApron::EndIdleStunned() {
}

UWWEAction_GoToApron::UWWEAction_GoToApron() {
    this->TimeStunned = 12.00f;
    this->RadiusCheck = 50.00f;
    this->bFromIrishWhip = false;
}

