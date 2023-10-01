#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnAuthenticateEmailDelegate.h"
#include "NakamaClientAuthenticateEmail.generated.h"

class UNakamaClient;
class UNakamaClientAuthenticateEmail;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaClientAuthenticateEmail : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaClient* NakamaClient;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAuthenticateEmail OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAuthenticateEmail OnError;
    
    UNakamaClientAuthenticateEmail();
    UFUNCTION(BlueprintCallable)
    static UNakamaClientAuthenticateEmail* AuthenticateEmail(UNakamaClient* Client, const FString& Email, const FString& password, const FString& username, bool CreateAccount, TMap<FString, FString> Vars);
    
};

