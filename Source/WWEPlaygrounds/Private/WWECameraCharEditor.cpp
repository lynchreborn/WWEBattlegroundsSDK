#include "WWECameraCharEditor.h"

AWWECameraCharEditor::AWWECameraCharEditor() {
    this->NewPositionTimeout = 10.00f;
    this->TransitionSpeed = 5.00f;
    this->HeadHeightOffset = 20.00f;
    this->LowerBodyHeightOffset = 0.00f;
    this->CameraLateralOffset = 0.00f;
    this->CameraHeadLateralOffset = 0.00f;
    this->CameraTVLateralOffset = 0.00f;
    this->ZoomMovement = 0.00f;
    this->TVDistance = 0.00f;
    this->HeadDistance = 0.00f;
    this->UpperBodyDistance = 0.00f;
    this->LowerBodyDistance = 0.00f;
    this->FullBodyDistance = 0.00f;
    this->PositionIndex = 0;
    this->LastPositionIndex = 0;
    this->CurrentTimeout = 0.00f;
    this->NewPositionAlpha = 0.00f;
    this->ZoomIn = false;
    this->LastUsedZoomIn = false;
    this->bFocusHead = false;
    this->bFocusTV = false;
    this->bReachObjective = false;
    this->CharacterEditor = NULL;
    this->ZoomItemCategory = EWWEItemCategory::Root;
    this->MaxZoomDistance = 0.00f;
}

