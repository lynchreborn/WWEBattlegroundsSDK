#include "SBScrollingDisplay.h"

USBScrollingDisplay::USBScrollingDisplay() : UUserWidget(FObjectInitializer::Get()) {
    this->ScrollingTextblock = NULL;
    this->ContainerWidth = 0;
    this->InitialWait = 0.00f;
    this->ScrollingSpeed = 0.00f;
    this->StartEmpty = false;
}

