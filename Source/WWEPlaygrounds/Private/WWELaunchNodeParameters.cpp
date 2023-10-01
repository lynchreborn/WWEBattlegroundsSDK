#include "WWELaunchNodeParameters.h"

FWWELaunchNodeParameters::FWWELaunchNodeParameters() {
    this->Instigator = NULL;
    this->InstigatorNode = NULL;
    this->CustomActor = NULL;
    this->CustomInteger = 0;
    this->ForcedYaw = 0.00f;
    this->ExternalVariation = 0;
    this->MatchedVariation = NULL;
    this->bSignatureMove = false;
    this->bForceAbort = false;
    this->bSkipCanStart = false;
    this->CombinationMode = EWWECombinationList::None;
    this->Input = EWWEInputAction::None;
    this->bCheckStamina = false;
}

