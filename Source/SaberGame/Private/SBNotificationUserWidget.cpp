#include "SBNotificationUserWidget.h"

void USBNotificationUserWidget::SetNotificationIconVisibility(bool _bIsVisible) {
}

void USBNotificationUserWidget::RefreshNotifications() {
}

bool USBNotificationUserWidget::IsNotificationIconVisible_Implementation() {
    return false;
}

USBNotificationUserWidget::USBNotificationUserWidget() {
    this->NotificationIcon = NULL;
}

