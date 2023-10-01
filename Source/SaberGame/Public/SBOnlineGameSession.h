#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBOnlineGameSession.generated.h"

UCLASS(Blueprintable)
class SABERGAME_API USBOnlineGameSession : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bJoinSessionAndConnect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartSessionNotifyClients;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEndSessionNotifyClients;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PendingSanitizeString;
    
public:
    USBOnlineGameSession();
};

