#pragma once
#include "CoreMinimal.h"
#include "SBGameDisconnectedNotification.h"
#include "WWEGameDisconnectedNotification.generated.h"

class UOverlay;
class USBStylizedText;

UCLASS(Blueprintable, EditInlineNew)
class WWEPLAYGROUNDS_API UWWEGameDisconnectedNotification : public USBGameDisconnectedNotification {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* CP_Arabic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* ArConnectMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBStylizedText* ArNickName;
    
public:
    UWWEGameDisconnectedNotification();
};

