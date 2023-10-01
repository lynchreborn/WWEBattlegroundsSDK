#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnAuthenticateFacebookDelegate.h"
#include "NakamaClientAuthenticateFacebook.generated.h"

class UNakamaClient;
class UNakamaClientAuthenticateFacebook;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaClientAuthenticateFacebook : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaClient* NakamaClient;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAuthenticateFacebook OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAuthenticateFacebook OnError;
    
    UNakamaClientAuthenticateFacebook();
    UFUNCTION(BlueprintCallable)
    static UNakamaClientAuthenticateFacebook* AuthenticateFacebook(UNakamaClient* Client, const FString& AccessToken, const FString& username, bool CreateAccount, bool ImportFriends, TMap<FString, FString> Vars);
    
};

