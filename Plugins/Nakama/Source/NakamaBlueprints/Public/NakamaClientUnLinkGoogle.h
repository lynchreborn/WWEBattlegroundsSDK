#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnLinkErrorDelegate.h"
#include "OnLinkSuccessfulDelegate.h"
#include "NakamaClientUnLinkGoogle.generated.h"

class UNakamaClient;
class UNakamaClientUnLinkGoogle;
class UNakamaSession;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaClientUnLinkGoogle : public UBlueprintAsyncActionBase {
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
    
    UNakamaClientUnLinkGoogle();
    UFUNCTION(BlueprintCallable)
    static UNakamaClientUnLinkGoogle* UnLinkGoogle(UNakamaClient* Client, UNakamaSession* Session, const FString& AccessToken);
    
};

