#include "WWEGameModeArenaEditor.h"

void AWWEGameModeArenaEditor::FadeInSlotSelectionScreenMusic() {
}

AWWEGameModeArenaEditor::AWWEGameModeArenaEditor() {
    this->CameraTravelSoundCue = NULL;
    this->DefaultMusicCue = NULL;
    this->FadeActor = NULL;
    this->EditableArenaSlotIndex = -1;
    this->LevelSequencePlayerManager = NULL;
    this->TravelingTime = 0.00f;
    this->InterpolationFunction = EAlphaBlendOption::Linear;
    this->InterpolationCustomCurve = NULL;
    this->EditorCamera = NULL;
    this->bIsTraveling = false;
    this->ElapsedTravelingTime = 0.00f;
}

