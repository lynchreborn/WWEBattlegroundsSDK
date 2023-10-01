#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnAnyErrorDelegate.h"
#include "OnSuccessfulDelegate.h"
#include "NakamaClientDeleteNotifications.generated.h"

class UNakamaClient;
class UNakamaClientDeleteNotifications;
class UNakamaSession;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaClientDeleteNotifications : public UBlueprintAsyncActionBase {
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
    
    UNakamaClientDeleteNotifications();
    UFUNCTION(BlueprintCallable)
    static UNakamaClientDeleteNotifications* DeleteNotifications(UNakamaClient* Client, UNakamaSession* Session, TArray<FString> NotificationIds);
    
};

