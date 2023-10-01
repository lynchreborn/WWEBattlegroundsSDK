#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnRefreshSessionDelegate.h"
#include "NakamaClientRefreshSession.generated.h"

class UNakamaClient;
class UNakamaClientRefreshSession;
class UNakamaSession;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaClientRefreshSession : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaClient* NakamaClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaSession* UserSession;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRefreshSession OnError;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRefreshSession OnSuccess;
    
    UNakamaClientRefreshSession();
    UFUNCTION(BlueprintCallable)
    static UNakamaClientRefreshSession* RefreshSession(UNakamaClient* Client, UNakamaSession* Session);
    
};

