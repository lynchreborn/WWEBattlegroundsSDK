#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnAuthenticateCustomDelegate.h"
#include "NakamaClientAuthenticateCustom.generated.h"

class UNakamaClient;
class UNakamaClientAuthenticateCustom;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaClientAuthenticateCustom : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaClient* NakamaClient;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAuthenticateCustom OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAuthenticateCustom OnError;
    
    UNakamaClientAuthenticateCustom();
    UFUNCTION(BlueprintCallable)
    static UNakamaClientAuthenticateCustom* AuthenticateCustom(UNakamaClient* Client, const FString& UserID, const FString& username, bool CreateAccount, TMap<FString, FString> Vars);
    
};

