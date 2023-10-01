#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnGetUserAccountDelegate.h"
#include "NakamaClientGetUserAccount.generated.h"

class UNakamaClient;
class UNakamaClientGetUserAccount;
class UNakamaSession;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaClientGetUserAccount : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaClient* NakamaClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaSession* UserSession;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetUserAccount OnError;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetUserAccount OnSuccess;
    
    UNakamaClientGetUserAccount();
    UFUNCTION(BlueprintCallable)
    static UNakamaClientGetUserAccount* GetUserAccount(UNakamaClient* Client, UNakamaSession* Session);
    
};

