#include "WWECharacterSpawnerEditor.h"


void UWWECharacterSpawnerEditor::SetCharacterParameters(UWWECharacterParameters* Val, TArray<FString> CharacterItems, APGCharacter* CharClass, float AnimStartTime) {
}

AWWECharacterCharEditor* UWWECharacterSpawnerEditor::GetCharacterActor() const {
    return NULL;
}

void UWWECharacterSpawnerEditor::Destroy() {
}

UWWECharacterSpawnerEditor::UWWECharacterSpawnerEditor() {
    this->LoadingPanel = NULL;
    this->CharacterClass = NULL;
    this->CharacterParameters = NULL;
    this->CharacterActor = NULL;
    this->bShowLoadingPanel = true;
    this->RotationSpeed = 0.00f;
    this->RotationValue = 0.00f;
    this->bCanBeVisible = false;
}

