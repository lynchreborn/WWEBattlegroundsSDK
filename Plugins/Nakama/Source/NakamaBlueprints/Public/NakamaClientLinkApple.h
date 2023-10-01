#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnLinkErrorDelegate.h"
#include "OnLinkSuccessfulDelegate.h"
#include "NakamaClientLinkApple.generated.h"

class UNakamaClient;
class UNakamaClientLinkApple;
class UNakamaSession;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaClientLinkApple : public UBlueprintAsyncActionBase {
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
    
    UNakamaClientLinkApple();
    UFUNCTION(BlueprintCallable)
    static UNakamaClientLinkApple* LinkApple(UNakamaClient* Client, UNakamaSession* Session, const FString& Token);
    
};

