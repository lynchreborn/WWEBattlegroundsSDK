#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "LeavePartyDelegate.h"
#include "NakamaRealtimeClientLeaveParty.generated.h"

class UNakamaRealtimeClient;
class UNakamaRealtimeClientLeaveParty;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaRealtimeClientLeaveParty : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLeaveParty OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLeaveParty OnError;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaRealtimeClient* RealtimeClient;
    
public:
    UNakamaRealtimeClientLeaveParty();
    UFUNCTION(BlueprintCallable)
    static UNakamaRealtimeClientLeaveParty* LeaveParty(UNakamaRealtimeClient* NewRealtimeClient, const FString& PartyId);
    
};

