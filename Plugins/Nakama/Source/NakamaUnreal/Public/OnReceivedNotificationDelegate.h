#pragma once
#include "CoreMinimal.h"
#include "NakamaNotificationList.h"
#include "OnReceivedNotificationDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReceivedNotification, const FNakamaNotificationList&, NotificationData);

