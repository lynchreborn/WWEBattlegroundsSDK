#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "CreatePartyDelegate.h"
#include "NakamaRealtimeClientCreateParty.generated.h"

class UNakamaRealtimeClient;
class UNakamaRealtimeClientCreateParty;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaRealtimeClientCreateParty : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreateParty OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreateParty OnError;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaRealtimeClient* RealtimeClient;
    
public:
    UNakamaRealtimeClientCreateParty();
    UFUNCTION(BlueprintCallable)
    static UNakamaRealtimeClientCreateParty* CreateParty(UNakamaRealtimeClient* NewRealtimeClient, bool Open, int32 MaxSize);
    
};

