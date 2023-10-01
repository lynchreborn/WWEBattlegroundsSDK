#include "SBSlateLoadingScreenHelper.h"

void USBSlateLoadingScreenHelper::SetupLoadingScreen(bool bSetDefault) {
}

void USBSlateLoadingScreenHelper::Configurate() {
}

USBSlateLoadingScreenHelper::USBSlateLoadingScreenHelper() {
    this->MinimumLoadingScreenDisplayTime = 1.00f;
    this->bAutoCompleteWhenLoadingCompletes = true;
    this->bWaitForManualStop = false;
}

