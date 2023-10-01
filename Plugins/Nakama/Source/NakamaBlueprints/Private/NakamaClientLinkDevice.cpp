#include "NakamaClientLinkDevice.h"

UNakamaClientLinkDevice* UNakamaClientLinkDevice::LinkDevice(UNakamaClient* Client, UNakamaSession* Session, const FString& DeviceID) {
    return NULL;
}

UNakamaClientLinkDevice::UNakamaClientLinkDevice() {
    this->NakamaClient = NULL;
    this->UserSession = NULL;
}

