#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ListNotificationsDelegate.h"
#include "NakamaClientListNotifications.generated.h"

class UNakamaClient;
class UNakamaClientListNotifications;
class UNakamaSession;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaClientListNotifications : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaClient* NakamaClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaSession* UserSession;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FListNotifications OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FListNotifications OnError;
    
    UNakamaClientListNotifications();
    UFUNCTION(BlueprintCallable)
    static UNakamaClientListNotifications* ListNotifications(UNakamaClient* Client, UNakamaSession* Session, int32 Limit, const FString& Cursor);
    
};

