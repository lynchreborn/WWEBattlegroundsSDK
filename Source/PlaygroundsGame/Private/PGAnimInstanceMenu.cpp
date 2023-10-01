#include "PGAnimInstanceMenu.h"

void UPGAnimInstanceMenu::SetRenderActionName(const FName& RenderActionName) {
}

FName UPGAnimInstanceMenu::GetRenderActionName() {
    return NAME_None;
}

int32 UPGAnimInstanceMenu::GetRenderActionID() {
    return 0;
}

UPGAnimInstanceMenu::UPGAnimInstanceMenu() {
    this->bInPose = false;
    this->CharacterIndex = 0;
    this->AnimStartTime = 0.00f;
    this->RenderActionID = 0;
}

