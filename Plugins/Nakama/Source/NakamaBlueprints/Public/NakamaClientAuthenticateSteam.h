#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnAuthenticateSteamDelegate.h"
#include "NakamaClientAuthenticateSteam.generated.h"

class UNakamaClient;
class UNakamaClientAuthenticateSteam;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaClientAuthenticateSteam : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaClient* NakamaClient;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAuthenticateSteam OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAuthenticateSteam OnError;
    
    UNakamaClientAuthenticateSteam();
    UFUNCTION(BlueprintCallable)
    static UNakamaClientAuthenticateSteam* AuthenticateSteam(UNakamaClient* Client, const FString& SteamToken, const FString& username, bool CreateAccount, TMap<FString, FString> Vars);
    
};

