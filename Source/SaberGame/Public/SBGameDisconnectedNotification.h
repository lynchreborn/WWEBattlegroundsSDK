#pragma once
#include "CoreMinimal.h"
#include "SBNotificationBase.h"
#include "SBGameDisconnectedNotification.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SABERGAME_API USBGameDisconnectedNotification : public USBNotificationBase {
    GENERATED_BODY()
public:
    USBGameDisconnectedNotification();
};

