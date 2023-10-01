#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnWriteChannelMessageDelegate.h"
#include "NakamaRealtimeClientSendDirectMessage.generated.h"

class UNakamaRealtimeClient;
class UNakamaRealtimeClientSendDirectMessage;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaRealtimeClientSendDirectMessage : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWriteChannelMessage OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWriteChannelMessage OnError;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaRealtimeClient* RealtimeClient;
    
public:
    UNakamaRealtimeClientSendDirectMessage();
    UFUNCTION(BlueprintCallable)
    static UNakamaRealtimeClientSendDirectMessage* SendDirectMessage(UNakamaRealtimeClient* NewRealtimeClient, const FString& UserID, const FString& Content);
    
};

