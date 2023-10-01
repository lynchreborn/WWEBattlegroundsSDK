#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnWriteChannelMessageDelegate.h"
#include "NakamaRealtimeClientSendMessage.generated.h"

class UNakamaRealtimeClient;
class UNakamaRealtimeClientSendMessage;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaRealtimeClientSendMessage : public UBlueprintAsyncActionBase {
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
    UNakamaRealtimeClientSendMessage();
    UFUNCTION(BlueprintCallable)
    static UNakamaRealtimeClientSendMessage* SendMessage(UNakamaRealtimeClient* NewRealtimeClient, const FString& ChannelId, const FString& Content);
    
};

