#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NakamaError.h"
#include "NakamaNotificationList.h"
#include "NakamaRtError.h"
#include "NakamaManager.generated.h"

class UNakamaClient;
class UNakamaRealtimeClient;
class UNakamaSession;

UCLASS(Blueprintable)
class ONLINESUBSYSTEMNAKAMA_API UNakamaManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaClient* NakamaClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaRealtimeClient* NakamaRtClient;
    
    UNakamaManager();
private:
    UFUNCTION(BlueprintCallable)
    void OnRtError(const FNakamaRtError& ErrorData);
    
    UFUNCTION(BlueprintCallable)
    void OnRtConnected();
    
    UFUNCTION(BlueprintCallable)
    void OnReceivedNotification(const FNakamaNotificationList& NotificationList);
    
    UFUNCTION(BlueprintCallable)
    void OnAuthenticationSuccess(UNakamaSession* LoginData);
    
    UFUNCTION(BlueprintCallable)
    void OnAuthenticationError(const FNakamaError& ErrorData);
    
};

