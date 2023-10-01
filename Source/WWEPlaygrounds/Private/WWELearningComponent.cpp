#include "WWELearningComponent.h"

void UWWELearningComponent::UpdateAvailableTutorials(float DeltaTime) {
}

void UWWELearningComponent::ShowTutorialMessageBoxes() {
}

void UWWELearningComponent::SetTutorialMessageBoxTexts(TArray<FText> MessageBoxTexts) {
}

void UWWELearningComponent::RestorePhysics(float TimeDilation) {
}

void UWWELearningComponent::OnMatchRestarted() {
}

void UWWELearningComponent::OnActionEnd(UWWEActionNode* ActionNode, EWWEActionNodeResult Result, bool bIsLastAction) {
}

void UWWELearningComponent::OnActionBegin(UWWEActionNode* ActionNode) {
}

void UWWELearningComponent::ForceStartTutorial(int32 TutorialIndex) {
}

void UWWELearningComponent::EnableTutorialInput() {
}

void UWWELearningComponent::ConfigureAndShowMessageBoxes() {
}

UWWELearningComponent::UWWELearningComponent() {
    this->DefaultContentInteractiveTutorial = NULL;
    this->CachedOwnerCharacter = NULL;
    this->bInitialized = false;
    this->OnSuccessCue = NULL;
    this->OnFailedCue = NULL;
    this->InteractiveTutorialWidget = NULL;
    this->bAllTutorialsFinished = false;
    this->CurrentMessageBoxesQueueIndex = 0;
    this->bEnableInputTimer = false;
    this->CurrentTimeElapsed = 0.00f;
    this->StartingAudioTime = 0.00f;
}

