#include "SBNotificationBase.h"

USBNotificationBase::USBNotificationBase() {
    this->MessageText = NULL;
    this->Notification_InOut = NULL;
    this->MySBNotificationState = ESBNotificationState::NONE;
}

