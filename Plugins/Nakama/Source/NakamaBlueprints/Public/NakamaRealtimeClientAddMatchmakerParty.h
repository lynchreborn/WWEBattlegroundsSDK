#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AddMatchmakerPartyDelegate.h"
#include "NakamaRealtimeClientAddMatchmakerParty.generated.h"

class UNakamaRealtimeClient;
class UNakamaRealtimeClientAddMatchmakerParty;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaRealtimeClientAddMatchmakerParty : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAddMatchmakerParty OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAddMatchmakerParty OnError;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaRealtimeClient* RealtimeClient;
    
public:
    UNakamaRealtimeClientAddMatchmakerParty();
    UFUNCTION(BlueprintCallable)
    static UNakamaRealtimeClientAddMatchmakerParty* AddMatchmakerParty(UNakamaRealtimeClient* NewRealtimeClient, const FString& PartyId, int32 MinCount, int32 MaxCount, const FString& Query, TMap<FString, FString> StringProperties, TMap<FString, int32> NumericProperties, int32 CountMultiple, bool IgnoreCountMultiple);
    
};

