#include "WWECharacterEditorStepHeight.h"

UWWECharacterEditorStepHeight::UWWECharacterEditorStepHeight() {
    this->HeightInputController = NULL;
    this->TableImage = NULL;
    this->CanvasMax = NULL;
    this->CanvasMin = NULL;
    this->CanvasHeight = NULL;
    this->Height = NULL;
    this->MaxHeight = NULL;
    this->MinHeight = NULL;
    this->MinValueToPlaySound = 0.10f;
    this->MoveValueWithArrow = 0.20f;
    this->MovementSpeed = 150.00f;
    this->OnHeightIncreaseSoundCue = NULL;
    this->OnHeightDecreaseSoundCue = NULL;
}

