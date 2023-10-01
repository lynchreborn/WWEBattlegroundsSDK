#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnRealtimeClientConnectDelegate.h"
#include "OnRealtimeClientConnectErrorDelegate.h"
#include "NakamaRealtimeClientConnect.generated.h"

class UNakamaRealtimeClient;
class UNakamaRealtimeClientConnect;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaRealtimeClientConnect : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRealtimeClientConnectError OnError;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRealtimeClientConnect OnSuccess;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaRealtimeClient* RealtimeClient;
    
public:
    UNakamaRealtimeClientConnect();
    UFUNCTION(BlueprintCallable)
    static UNakamaRealtimeClientConnect* Connect(UNakamaRealtimeClient* NewRealtimeClient);
    
};

