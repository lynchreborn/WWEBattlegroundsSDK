#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "LeaveMatchDelegate.h"
#include "NakamaRealtimeClientLeaveMatch.generated.h"

class UNakamaRealtimeClient;
class UNakamaRealtimeClientLeaveMatch;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaRealtimeClientLeaveMatch : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLeaveMatch OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLeaveMatch OnError;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaRealtimeClient* RealtimeClient;
    
public:
    UNakamaRealtimeClientLeaveMatch();
    UFUNCTION(BlueprintCallable)
    static UNakamaRealtimeClientLeaveMatch* LeaveMatch(UNakamaRealtimeClient* NewRealtimeClient, const FString& MatchId);
    
};

