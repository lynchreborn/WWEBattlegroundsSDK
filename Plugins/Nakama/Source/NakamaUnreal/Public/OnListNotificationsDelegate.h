#pragma once
#include "CoreMinimal.h"
#include "NakamaNotificationList.h"
#include "OnListNotificationsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnListNotifications, FNakamaNotificationList, NotificationList);

