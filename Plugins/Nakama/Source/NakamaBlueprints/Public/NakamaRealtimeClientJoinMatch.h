#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "JoinMatchDelegate.h"
#include "NakamaRealtimeClientJoinMatch.generated.h"

class UNakamaRealtimeClient;
class UNakamaRealtimeClientJoinMatch;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaRealtimeClientJoinMatch : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJoinMatch OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJoinMatch OnError;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaRealtimeClient* RealtimeClient;
    
public:
    UNakamaRealtimeClientJoinMatch();
    UFUNCTION(BlueprintCallable)
    static UNakamaRealtimeClientJoinMatch* JoinMatch(UNakamaRealtimeClient* NewRealtimeClient, const FString& MatchId, TMap<FString, FString> MetaData);
    
};

