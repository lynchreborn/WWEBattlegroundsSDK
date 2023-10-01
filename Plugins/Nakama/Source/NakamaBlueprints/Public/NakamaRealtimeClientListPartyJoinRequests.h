#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ListPartyJoinRequestsDelegate.h"
#include "NakamaRealtimeClientListPartyJoinRequests.generated.h"

class UNakamaRealtimeClient;
class UNakamaRealtimeClientListPartyJoinRequests;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaRealtimeClientListPartyJoinRequests : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FListPartyJoinRequests OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FListPartyJoinRequests OnError;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaRealtimeClient* RealtimeClient;
    
public:
    UNakamaRealtimeClientListPartyJoinRequests();
    UFUNCTION(BlueprintCallable)
    static UNakamaRealtimeClientListPartyJoinRequests* ListPartyJoinRequests(UNakamaRealtimeClient* NewRealtimeClient, const FString& PartyId);
    
};

