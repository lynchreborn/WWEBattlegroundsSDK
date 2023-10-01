#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnAuthenticateGoogleDelegate.h"
#include "NakamaClientAuthenticateGoogle.generated.h"

class UNakamaClient;
class UNakamaClientAuthenticateGoogle;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaClientAuthenticateGoogle : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaClient* NakamaClient;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAuthenticateGoogle OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAuthenticateGoogle OnError;
    
    UNakamaClientAuthenticateGoogle();
    UFUNCTION(BlueprintCallable)
    static UNakamaClientAuthenticateGoogle* AuthenticateGoogle(UNakamaClient* Client, const FString& AccessToken, const FString& username, bool CreateAccount, TMap<FString, FString> Vars);
    
};

