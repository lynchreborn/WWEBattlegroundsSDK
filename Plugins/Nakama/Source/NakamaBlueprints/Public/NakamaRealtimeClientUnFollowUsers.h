#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnAnyRtErrorDelegate.h"
#include "OnRealtimeSuccessfulDelegate.h"
#include "NakamaRealtimeClientUnFollowUsers.generated.h"

class UNakamaRealtimeClient;
class UNakamaRealtimeClientUnFollowUsers;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaRealtimeClientUnFollowUsers : public UBlueprintAsyncActionBase {
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
    UNakamaRealtimeClientUnFollowUsers();
    UFUNCTION(BlueprintCallable)
    static UNakamaRealtimeClientUnFollowUsers* UnFollowUsers(UNakamaRealtimeClient* NewRealtimeClient, TArray<FString> UserIds);
    
};

