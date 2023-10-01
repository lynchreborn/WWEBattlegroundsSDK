#include "WWECharacterCharEditor.h"

AWWECharacterCharEditor::AWWECharacterCharEditor() {
    this->HeightSpeed = 70.00f;
    this->TotalTime = 0.25f;
    this->HeightAnimCurve = NULL;
    this->HairPhysicalAnimationComponent = NULL;
    this->bCanEnablePhysics = false;
    this->bIsInLobby = false;
    this->TargetCharacterHeight = 0.00f;
    this->RemainingTime = -1.00f;
    this->InitialHeight = 0.00f;
    this->MorphIndex = 0;
}

