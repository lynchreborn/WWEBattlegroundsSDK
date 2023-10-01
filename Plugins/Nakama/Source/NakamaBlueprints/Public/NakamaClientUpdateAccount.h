#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnAnyErrorDelegate.h"
#include "OnSuccessfulDelegate.h"
#include "NakamaClientUpdateAccount.generated.h"

class UNakamaClient;
class UNakamaClientUpdateAccount;
class UNakamaSession;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaClientUpdateAccount : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaClient* NakamaClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaSession* UserSession;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnyError OnError;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSuccessful OnSuccess;
    
    UNakamaClientUpdateAccount();
    UFUNCTION(BlueprintCallable)
    static UNakamaClientUpdateAccount* UpdateAccount(UNakamaClient* Client, UNakamaSession* Session, const FString& username, const FString& DisplayName, const FString& AvatarUrl, const FString& LanguageTag, const FString& Location, const FString& TimeZone);
    
};

