#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnLinkErrorDelegate.h"
#include "OnLinkSuccessfulDelegate.h"
#include "NakamaClientLinkFacebook.generated.h"

class UNakamaClient;
class UNakamaClientLinkFacebook;
class UNakamaSession;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaClientLinkFacebook : public UBlueprintAsyncActionBase {
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
    
    UNakamaClientLinkFacebook();
    UFUNCTION(BlueprintCallable)
    static UNakamaClientLinkFacebook* LinkFacebook(UNakamaClient* Client, UNakamaSession* Session, const FString& AccessToken, bool ImportFriends);
    
};

