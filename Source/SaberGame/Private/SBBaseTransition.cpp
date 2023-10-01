#include "SBBaseTransition.h"

void USBBaseTransition::TransitionOut(USBBaseScene* FromDontUse, USBBaseScene* to) {
}

void USBBaseTransition::TransitionIn(USBBaseScene* from, USBBaseScene* ToDontUse) {
}

void USBBaseTransition::StopAndClearReferences() {
}

void USBBaseTransition::ResetTransition(USBBaseScene* from, USBBaseScene* ToDontUse) {
}

void USBBaseTransition::OnTransitionOutFinished() {
}

void USBBaseTransition::OnTransitionInFinished() {
}

void USBBaseTransition::Init(USBGameInstance* GameInstance) {
}

USBBaseTransition::USBBaseTransition() {
    this->MyGameInstance = NULL;
}

