#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnAuthenticateGameCenterDelegate.h"
#include "NakamaClientAuthenticateGameCenter.generated.h"

class UNakamaClient;
class UNakamaClientAuthenticateGameCenter;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaClientAuthenticateGameCenter : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaClient* NakamaClient;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAuthenticateGameCenter OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAuthenticateGameCenter OnError;
    
    UNakamaClientAuthenticateGameCenter();
    UFUNCTION(BlueprintCallable)
    static UNakamaClientAuthenticateGameCenter* AuthenticateGameCenter(UNakamaClient* Client, const FString& PlayerId, const FString& BundleId, int64 TimeStampSeconds, const FString& Salt, const FString& Signature, const FString& PublicKeyUrl, const FString& username, bool CreateAccount, TMap<FString, FString> Vars);
    
};

