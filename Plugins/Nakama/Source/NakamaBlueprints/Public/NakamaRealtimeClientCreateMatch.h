#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "CreateMatchDelegate.h"
#include "NakamaRealtimeClientCreateMatch.generated.h"

class UNakamaRealtimeClient;
class UNakamaRealtimeClientCreateMatch;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaRealtimeClientCreateMatch : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreateMatch OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreateMatch OnError;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaRealtimeClient* RealtimeClient;
    
public:
    UNakamaRealtimeClientCreateMatch();
    UFUNCTION(BlueprintCallable)
    static UNakamaRealtimeClientCreateMatch* CreateMatch(UNakamaRealtimeClient* NewRealtimeClient);
    
};

