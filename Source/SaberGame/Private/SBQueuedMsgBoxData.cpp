#include "SBQueuedMsgBoxData.h"

FSBQueuedMsgBoxData::FSBQueuedMsgBoxData() {
    this->Type = ESBMessageBoxType::OK;
    this->ControllerId = 0;
    this->MessageBoxSize = ESBMessageBoxSize::Normal;
}

