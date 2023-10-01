#include "WWECharismaComponent.h"

void UWWECharismaComponent::UnlockCharisma() {
}

void UWWECharismaComponent::OnProgressionPointsAdded(EWWEUserProgressionCondition Condition, int32 Quantity, const AWWECharacterCombat* Character) {
}

void UWWECharismaComponent::OnInactivityTimeCompleted() {
}

void UWWECharismaComponent::OnCurrentFulfillableNegativeActionTimeOut(FWWECharismaActionWithParameters& CharismaAction) {
}

void UWWECharismaComponent::OnCurrentFulfillableActionTimeOut(EWWEUserProgressionCondition Condition) {
}

void UWWECharismaComponent::OnCurrentFulfillableActionNearTimeOut(EWWEUserProgressionCondition Condition) {
}

void UWWECharismaComponent::MulticastOnLockCharisma_Implementation(bool _bCharismaLocked, float Duration) {
}

void UWWECharismaComponent::MulticastOnInactivityTimeCompleted_Implementation() {
}

void UWWECharismaComponent::MulticastOnAddCharisma_Implementation(int32 _CurrentCharisma, int32 CharismaToAdd, bool bKeyAction, bool bInactivity, bool bSuggestedAction) {
}

void UWWECharismaComponent::MulticastOnActionsChanged_Implementation(const TArray<FWWECharismaAction>& InCurrentFulfillableActions, bool bDidCharismaChange) {
}

void UWWECharismaComponent::MulticastOnActionNearTimeOut_Implementation(EWWEUserProgressionCondition Condition) {
}

void UWWECharismaComponent::FinishLoadingCharismaValuesFromConfiguration() {
}

void UWWECharismaComponent::FinishDelayEndCurrentAction() {
}

void UWWECharismaComponent::EnableInactivity(const AWWECharacterCombat* CharacterCombat) {
}

void UWWECharismaComponent::DisableInactivity(const AWWECharacterCombat* CharacterCombat) {
}

void UWWECharismaComponent::AddCharisma(int32 CharismaToAdd, bool bKeyAction, bool bInactivity, bool bSuggestedAction) {
}

UWWECharismaComponent::UWWECharismaComponent() {
    this->CharismaConfiguration = NULL;
    this->CurrentCharisma = 0;
    this->bCharismaLocked = 0;
    this->NumberOfActionsSkippedInARow = 0;
}

