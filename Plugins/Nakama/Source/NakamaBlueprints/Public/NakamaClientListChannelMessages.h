#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnChannelMessagesListedDelegate.h"
#include "NakamaClientListChannelMessages.generated.h"

class UNakamaClient;
class UNakamaClientListChannelMessages;
class UNakamaSession;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaClientListChannelMessages : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaClient* NakamaClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaSession* UserSession;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChannelMessagesListed OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChannelMessagesListed OnError;
    
    UNakamaClientListChannelMessages();
    UFUNCTION(BlueprintCallable)
    static UNakamaClientListChannelMessages* ListChannelMessages(UNakamaClient* Client, UNakamaSession* Session, const FString& ChannelId, int32 Limit, const FString& Cursor, bool Forward);
    
};

