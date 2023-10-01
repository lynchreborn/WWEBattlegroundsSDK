#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnAnyRtErrorDelegate.h"
#include "OnRealtimeSuccessfulDelegate.h"
#include "NakamaRealtimeClientUpdateStatus.generated.h"

class UNakamaRealtimeClient;
class UNakamaRealtimeClientUpdateStatus;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaRealtimeClientUpdateStatus : public UBlueprintAsyncActionBase {
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
    UNakamaRealtimeClientUpdateStatus();
    UFUNCTION(BlueprintCallable)
    static UNakamaRealtimeClientUpdateStatus* UpdateStatus(UNakamaRealtimeClient* NewRealtimeClient, const FString& StatusMessage);
    
};

