#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "NakamaUserPresence.h"
#include "OnAnyRtErrorDelegate.h"
#include "OnRealtimeSuccessfulDelegate.h"
#include "NakamaRealtimeClientPromotePartyMember.generated.h"

class UNakamaRealtimeClient;
class UNakamaRealtimeClientPromotePartyMember;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaRealtimeClientPromotePartyMember : public UBlueprintAsyncActionBase {
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
    UNakamaRealtimeClientPromotePartyMember();
    UFUNCTION(BlueprintCallable)
    static UNakamaRealtimeClientPromotePartyMember* PromotePartyMember(UNakamaRealtimeClient* NewRealtimeClient, const FString& PartyId, FNakamaUserPresence PartyMember);
    
};

