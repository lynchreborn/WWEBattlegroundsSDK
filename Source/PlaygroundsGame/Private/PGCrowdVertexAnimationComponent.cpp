#include "PGCrowdVertexAnimationComponent.h"

void UPGCrowdVertexAnimationComponent::OnReachZeroChearUp() {
}

void UPGCrowdVertexAnimationComponent::IncrementCheeringCrowdPercentage() {
}

void UPGCrowdVertexAnimationComponent::DecreaseCheeringCrowdPercentage() {
}

void UPGCrowdVertexAnimationComponent::DeactivateChange() {
}

void UPGCrowdVertexAnimationComponent::DeactivateCanCheer() {
}

void UPGCrowdVertexAnimationComponent::ActivateCanCheer() {
}

UPGCrowdVertexAnimationComponent::UPGCrowdVertexAnimationComponent() {
    this->MaterialParameterCollection = NULL;
    this->CheeringIncrement = 0.01f;
    this->SecondsPerTransition = 3.60f;
    this->MaterialParameterCollectionInstance = NULL;
    this->FunctionToExecuteAfterTransition = NULL;
}

