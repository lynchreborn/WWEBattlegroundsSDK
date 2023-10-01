#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnListStorageObjectsDelegate.h"
#include "NakamaClientListtorageObjects.generated.h"

class UNakamaClient;
class UNakamaClientListtorageObjects;
class UNakamaSession;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaClientListtorageObjects : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaClient* NakamaClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaSession* UserSession;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnListStorageObjects OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnListStorageObjects OnError;
    
    UNakamaClientListtorageObjects();
    UFUNCTION(BlueprintCallable)
    static UNakamaClientListtorageObjects* ListStorageObjects(UNakamaClient* Client, UNakamaSession* Session, const FString& Collection, const FString& UserID, int32 Limit, const FString& Cursor);
    
};

