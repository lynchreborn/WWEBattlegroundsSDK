#include "WWEActionComponent.h"
#include "Net/UnrealNetwork.h"

void UWWEActionComponent::OnRep_Actions() {
}

void UWWEActionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UWWEActionComponent, Actions);
    DOREPLIFETIME(UWWEActionComponent, Blackboard);
    DOREPLIFETIME(UWWEActionComponent, CurrentAction);
    DOREPLIFETIME(UWWEActionComponent, PreviousAction);
    DOREPLIFETIME(UWWEActionComponent, LastAction);
}

UWWEActionComponent::UWWEActionComponent() {
    this->bActionsInitialized = false;
    this->MinInputTimeBeforeEnqueue = 0.30f;
    this->MaxEnqueuedActionTimeDelta = 1.00f;
    this->Blackboard = NULL;
    this->CurrentAction = NULL;
    this->PreviousAction = NULL;
    this->LastAction = NULL;
    this->EnqueuedActionNode = NULL;
    this->ActionBeginTimestamp = 0.00f;
    this->EnqueuedActionTimestamp = -1.00f;
    this->bEnqueuedActionForced = false;
    this->NewActionMode = EWWENewActionMode::AbortCurrent;
    this->bCheckEnqueuedAction = false;
    this->bCanBreakCurrentAction = false;
}

