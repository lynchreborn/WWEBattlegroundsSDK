#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "LeaveChatDelegate.h"
#include "NakamaRealtimeClientLeaveChat.generated.h"

class UNakamaRealtimeClient;
class UNakamaRealtimeClientLeaveChat;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaRealtimeClientLeaveChat : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLeaveChat OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLeaveChat OnError;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaRealtimeClient* RealtimeClient;
    
public:
    UNakamaRealtimeClientLeaveChat();
    UFUNCTION(BlueprintCallable)
    static UNakamaRealtimeClientLeaveChat* LeaveChat(UNakamaRealtimeClient* NewRealtimeClient, const FString& ChannelId);
    
};

