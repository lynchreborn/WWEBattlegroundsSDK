#include "SBBaseScene.h"

void USBBaseScene::Unload() {
}

void USBBaseScene::RestoreFocus() {
}

void USBBaseScene::ResetLoadReferences() {
}

void USBBaseScene::Open(USBBaseTransition* Transition) {
}

void USBBaseScene::OnRemovedFromScenesStack() {
}

void USBBaseScene::OnOpenFinish() {
}

void USBBaseScene::OnLoadFinish() {
}

void USBBaseScene::OnFocusLost() {
}

void USBBaseScene::OnCloseFinish() {
}

void USBBaseScene::OnAddedToScenesStack() {
}

void USBBaseScene::Load() {
}

void USBBaseScene::Init(USBGameInstance* GameInstance) {
}

void USBBaseScene::Enable() {
}

void USBBaseScene::Disable() {
}

void USBBaseScene::Close(USBBaseTransition* Transition) {
}

USBBaseScene::USBBaseScene() {
    this->IsLoaded = false;
    this->MyGameInstance = NULL;
    this->IsPreloadable = false;
    this->bIsFallbackScene = false;
    this->ElementAnimationFinshedCount = 0;
    this->Opening = false;
    this->bOpened = false;
    this->OpenPending = false;
    this->OpenPendingTransition = NULL;
}

