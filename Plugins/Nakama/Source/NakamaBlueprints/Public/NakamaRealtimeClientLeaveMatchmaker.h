#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "LeaveMatchmakerDelegate.h"
#include "NakamaRealtimeClientLeaveMatchmaker.generated.h"

class UNakamaRealtimeClient;
class UNakamaRealtimeClientLeaveMatchmaker;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaRealtimeClientLeaveMatchmaker : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLeaveMatchmaker OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLeaveMatchmaker OnError;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaRealtimeClient* RealtimeClient;
    
public:
    UNakamaRealtimeClientLeaveMatchmaker();
    UFUNCTION(BlueprintCallable)
    static UNakamaRealtimeClientLeaveMatchmaker* LeaveMatchmaker(UNakamaRealtimeClient* NewRealtimeClient, const FString& Ticket);
    
};

