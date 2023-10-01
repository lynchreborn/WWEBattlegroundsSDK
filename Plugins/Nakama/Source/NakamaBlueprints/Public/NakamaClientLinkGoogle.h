#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnLinkErrorDelegate.h"
#include "OnLinkSuccessfulDelegate.h"
#include "NakamaClientLinkGoogle.generated.h"

class UNakamaClient;
class UNakamaClientLinkGoogle;
class UNakamaSession;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaClientLinkGoogle : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaClient* NakamaClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaSession* UserSession;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLinkError OnError;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLinkSuccessful OnSuccess;
    
    UNakamaClientLinkGoogle();
    UFUNCTION(BlueprintCallable)
    static UNakamaClientLinkGoogle* LinkGoogle(UNakamaClient* Client, UNakamaSession* Session, const FString& AccessToken);
    
};

