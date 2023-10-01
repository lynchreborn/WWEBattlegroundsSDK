#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ENakamaChannelType.h"
#include "JoinChatDelegate.h"
#include "NakamaRealtimeClientJoinChat.generated.h"

class UNakamaRealtimeClient;
class UNakamaRealtimeClientJoinChat;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaRealtimeClientJoinChat : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJoinChat OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJoinChat OnError;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaRealtimeClient* RealtimeClient;
    
public:
    UNakamaRealtimeClientJoinChat();
    UFUNCTION(BlueprintCallable)
    static UNakamaRealtimeClientJoinChat* JoinChat(UNakamaRealtimeClient* NewRealtimeClient, const FString& ChatId, ENakamaChannelType ChannelType, bool Persistence, bool Hidden);
    
};

