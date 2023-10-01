#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "JoinPartyDelegate.h"
#include "NakamaRealtimeClientJoinParty.generated.h"

class UNakamaRealtimeClient;
class UNakamaRealtimeClientJoinParty;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaRealtimeClientJoinParty : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJoinParty OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJoinParty OnError;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaRealtimeClient* RealtimeClient;
    
public:
    UNakamaRealtimeClientJoinParty();
    UFUNCTION(BlueprintCallable)
    static UNakamaRealtimeClientJoinParty* JoinParty(UNakamaRealtimeClient* NewRealtimeClient, const FString& PartyId);
    
};

