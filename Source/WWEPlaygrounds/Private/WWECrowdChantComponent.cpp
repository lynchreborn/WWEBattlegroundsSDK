#include "WWECrowdChantComponent.h"

void UWWECrowdChantComponent::OnMaximumMoney(const AWWECharacterCombat* CharacterCombat) {
}

void UWWECrowdChantComponent::OnMaximumCharisma(const AWWECharacterCombat* CharacterCombat) {
}

void UWWECrowdChantComponent::OnMatchStarted() {
}

void UWWECrowdChantComponent::OnMatchFinished(const AWWECharacterCombat* CharacterCombat) {
}

void UWWECrowdChantComponent::OnInactivity() {
}

void UWWECrowdChantComponent::OnActionStart(const UWWEActionNode* ActionNode, const AWWECharacterCombat* CharacterCombat) {
}

void UWWECrowdChantComponent::OnActionCustomEvent(const UWWEActionNode* ActionNode, const AWWECharacterCombat* CharacterCombat, EWWEActionNodeResult Result) {
}

void UWWECrowdChantComponent::OnActionCustomCountEvent(const UWWEActionNode* ActionNode, const AWWECharacterCombat* CharacterCombat, int32 CountNumber, EWWEActionNodeResult Result) {
}

void UWWECrowdChantComponent::AllowNegativeCrowdReactions() {
}

UWWECrowdChantComponent::UWWECrowdChantComponent() {
    this->SecondsUntilCrowdCanReactNegatively = 60.00f;
    this->CrowdChantNameAudioComponent = NULL;
}

