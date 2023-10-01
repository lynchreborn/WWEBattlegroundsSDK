#pragma once
#include "CoreMinimal.h"
#include "NakamaError.h"
#include "NakamaNotificationList.h"
#include "ListNotificationsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FListNotifications, FNakamaError, Error, FNakamaNotificationList, NotificationList);

