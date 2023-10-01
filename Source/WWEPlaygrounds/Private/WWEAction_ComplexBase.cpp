#include "WWEAction_ComplexBase.h"
#include "Net/UnrealNetwork.h"

void UWWEAction_ComplexBase::MulticastSetForcedNextActionIndex_Implementation(int32 Index) {
}

void UWWEAction_ComplexBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UWWEAction_ComplexBase, CurrentAction);
    DOREPLIFETIME(UWWEAction_ComplexBase, PreviousAction);
}

UWWEAction_ComplexBase::UWWEAction_ComplexBase() {
    this->PreselectedVariationIndex = -1;
    this->CurrentActionIndex = 0;
    this->PreviousActionIndex = -1;
    this->ForcedNextActionIndex = -1;
    this->ForcedClientResult = EWWEActionNodeResult::Succeeded;
    this->CurrentAction = NULL;
    this->PreviousAction = NULL;
    this->SignatureComment = NULL;
}

