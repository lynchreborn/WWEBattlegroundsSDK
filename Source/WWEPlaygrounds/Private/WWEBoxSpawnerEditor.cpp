#include "WWEBoxSpawnerEditor.h"


void UWWEBoxSpawnerEditor::SetBoxItemParameters(const FString& BoxItemID) {
}

void UWWEBoxSpawnerEditor::OnBoxLoaded() {
}

AWWEEntranceBox* UWWEBoxSpawnerEditor::GetBoxActor() const {
    return NULL;
}

void UWWEBoxSpawnerEditor::Destroy() {
}

UWWEBoxSpawnerEditor::UWWEBoxSpawnerEditor() {
    this->LoadingPanel = NULL;
    this->BoxClass = NULL;
    this->BoxItemParameters = NULL;
    this->BoxActor = NULL;
    this->bShowLoadingPanel = true;
    this->RotationSpeed = 0.00f;
    this->RotationValue = 0.00f;
    this->bCanBeVisible = false;
}

