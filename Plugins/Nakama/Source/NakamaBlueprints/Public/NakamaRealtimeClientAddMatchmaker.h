#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AddMatchmakerDelegate.h"
#include "NakamaRealtimeClientAddMatchmaker.generated.h"

class UNakamaRealtimeClient;
class UNakamaRealtimeClientAddMatchmaker;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaRealtimeClientAddMatchmaker : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAddMatchmaker OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAddMatchmaker OnError;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaRealtimeClient* RealtimeClient;
    
public:
    UNakamaRealtimeClientAddMatchmaker();
    UFUNCTION(BlueprintCallable)
    static UNakamaRealtimeClientAddMatchmaker* AddMatchmaker(UNakamaRealtimeClient* NewRealtimeClient, int32 MinCount, int32 MaxCount, const FString& Query, TMap<FString, FString> StringProperties, TMap<FString, int32> NumericProperties, int32 CountMultiple, bool IgnoreCountMultiple);
    
};

