#pragma once
#include "CoreMinimal.h"
#include "NakamaNotification.h"
#include "NakamaNotificationList.generated.h"

USTRUCT(BlueprintType)
struct NAKAMAUNREAL_API FNakamaNotificationList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNakamaNotification> Notifications;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CacheableCursor;
    
    FNakamaNotificationList();
};

