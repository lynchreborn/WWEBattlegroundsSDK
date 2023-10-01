#include "SBGrayableImage.h"

void USBGrayableImage::UpdateTexture(UTexture2D* NewTexture) {
}

void USBGrayableImage::SetIsGray(bool _bIsGray) {
}

void USBGrayableImage::InitMaterial() {
}

USBGrayableImage::USBGrayableImage() {
    this->GrayMaterial = NULL;
    this->NonGrayMaterial = NULL;
    this->MyGrayMaterial = NULL;
    this->MyTexture = NULL;
}

