#pragma once
#include "CoreMinimal.h"
#include "ESBNotificationState.h"
#include "SBUserWidget.h"
#include "SBNotificationBase.generated.h"

class USBStylizedText;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class SABERGAME_API USBNotificationBase : public USBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* MessageText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText NotificationText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Notification_InOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBNotificationState MySBNotificationState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InOutAnimationName;
    
public:
    USBNotificationBase();
};

