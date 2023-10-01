#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "NakamaUserPresence.h"
#include "OnAnyRtErrorDelegate.h"
#include "OnRealtimeSuccessfulDelegate.h"
#include "NakamaRealtimeClientAcceptPartyMember.generated.h"

class UNakamaRealtimeClient;
class UNakamaRealtimeClientAcceptPartyMember;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaRealtimeClientAcceptPartyMember : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnyRtError OnError;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRealtimeSuccessful OnSuccess;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaRealtimeClient* RealtimeClient;
    
public:
    UNakamaRealtimeClientAcceptPartyMember();
    UFUNCTION(BlueprintCallable)
    static UNakamaRealtimeClientAcceptPartyMember* AcceptPartyMember(UNakamaRealtimeClient* NewRealtimeClient, const FString& PartyId, FNakamaUserPresence Presence);
    
};

