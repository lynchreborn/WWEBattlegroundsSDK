#include "SBWidgetScene.h"

void USBWidgetScene::SetUserFocusWithCache() {
}

void USBWidgetScene::ClearUserFocus() {
}

void USBWidgetScene::ClearFocusCache() {
}

void USBWidgetScene::CheckAddToTransitionableElements(UWidget* ChildWidget) {
}

void USBWidgetScene::CacheCurrentUserFocus() {
}

USBWidgetScene::USBWidgetScene() {
    this->WidgetBP = NULL;
    this->Widget = NULL;
    this->bAllowMultipleFocus = false;
    this->ZOrder = 0;
    this->bIsResettingFocus = false;
}

