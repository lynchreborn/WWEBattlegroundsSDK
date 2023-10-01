#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "JoinMatchDelegate.h"
#include "NakamaRealtimeClientJoinMatchByToken.generated.h"

class UNakamaRealtimeClient;
class UNakamaRealtimeClientJoinMatchByToken;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaRealtimeClientJoinMatchByToken : public UBlueprintAsyncActionBase {
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
    UNakamaRealtimeClientJoinMatchByToken();
    UFUNCTION(BlueprintCallable)
    static UNakamaRealtimeClientJoinMatchByToken* JoinMatchByToken(UNakamaRealtimeClient* NewRealtimeClient, const FString& Token);
    
};

