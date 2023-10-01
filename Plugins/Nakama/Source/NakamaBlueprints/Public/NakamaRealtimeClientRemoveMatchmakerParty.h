#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "RemoveMatchmakerPartyDelegate.h"
#include "NakamaRealtimeClientRemoveMatchmakerParty.generated.h"

class UNakamaRealtimeClient;
class UNakamaRealtimeClientRemoveMatchmakerParty;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaRealtimeClientRemoveMatchmakerParty : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRemoveMatchmakerParty OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRemoveMatchmakerParty OnError;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaRealtimeClient* RealtimeClient;
    
public:
    UNakamaRealtimeClientRemoveMatchmakerParty();
    UFUNCTION(BlueprintCallable)
    static UNakamaRealtimeClientRemoveMatchmakerParty* RemoveMatchMakerParty(UNakamaRealtimeClient* NewRealtimeClient, const FString& PartyId, const FString& Ticket);
    
};

