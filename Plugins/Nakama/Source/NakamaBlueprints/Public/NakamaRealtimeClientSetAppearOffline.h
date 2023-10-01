#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnAnyRtErrorDelegate.h"
#include "OnRealtimeSuccessfulDelegate.h"
#include "NakamaRealtimeClientSetAppearOffline.generated.h"

class UNakamaRealtimeClient;
class UNakamaRealtimeClientSetAppearOffline;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaRealtimeClientSetAppearOffline : public UBlueprintAsyncActionBase {
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
    UNakamaRealtimeClientSetAppearOffline();
    UFUNCTION(BlueprintCallable)
    static UNakamaRealtimeClientSetAppearOffline* SetAppearOffline(UNakamaRealtimeClient* NewRealtimeClient);
    
};

