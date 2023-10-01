#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnLinkErrorDelegate.h"
#include "OnLinkSuccessfulDelegate.h"
#include "NakamaClientLinkCustom.generated.h"

class UNakamaClient;
class UNakamaClientLinkCustom;
class UNakamaSession;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaClientLinkCustom : public UBlueprintAsyncActionBase {
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
    
    UNakamaClientLinkCustom();
    UFUNCTION(BlueprintCallable)
    static UNakamaClientLinkCustom* LinkCustom(UNakamaClient* Client, UNakamaSession* Session, const FString& CustomId);
    
};

