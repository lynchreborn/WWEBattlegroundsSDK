#pragma once
#include "CoreMinimal.h"
#include "SBUserWidget.h"
#include "SBNotificationsWidget.generated.h"

class USBCommonNotification;
class USBDefaultContentSceneManager;
class USBGameDisconnectedNotification;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class SABERGAME_API USBNotificationsWidget : public USBUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBGameDisconnectedNotification*> ControllerSlots;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* NotificationsPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBDefaultContentSceneManager* DefaultContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USBGameDisconnectedNotification> GameDisconnectedNotificationClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USBCommonNotification> CommonNotificationClass;
    
public:
    USBNotificationsWidget();
};

