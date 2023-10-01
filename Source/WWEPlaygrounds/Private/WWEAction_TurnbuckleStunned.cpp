#include "WWEAction_TurnbuckleStunned.h"

void UWWEAction_TurnbuckleStunned::OnTimeEnd() {
}

UWWEAction_TurnbuckleStunned::UWWEAction_TurnbuckleStunned() {
    this->TimeToEndAction = 2.00f;
    this->bWasStrongIrishWhip = false;
}

