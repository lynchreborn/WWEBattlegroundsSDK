#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnAuthenticateAppleDelegate.h"
#include "NakamaClientAuthenticateApple.generated.h"

class UNakamaClient;
class UNakamaClientAuthenticateApple;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaClientAuthenticateApple : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaClient* NakamaClient;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAuthenticateApple OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAuthenticateApple OnError;
    
    UNakamaClientAuthenticateApple();
    UFUNCTION(BlueprintCallable)
    static UNakamaClientAuthenticateApple* AuthenticateApple(UNakamaClient* Client, const FString& Token, const FString& username, bool CreateAccount, TMap<FString, FString> Vars);
    
};

