#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "SBNotificationUserWidget.generated.h"

class USBNotificationIcon;

UCLASS(Blueprintable, EditInlineNew)
class SABERGAME_API USBNotificationUserWidget : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBNotificationIcon* NotificationIcon;
    
public:
    USBNotificationUserWidget();
    UFUNCTION(BlueprintCallable)
    void SetNotificationIconVisibility(bool _bIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void RefreshNotifications();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsNotificationIconVisible();
    
};

