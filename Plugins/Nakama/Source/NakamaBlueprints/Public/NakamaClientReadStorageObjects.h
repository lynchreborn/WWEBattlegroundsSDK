#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "NakamaReadStorageObjectId.h"
#include "OnReadStorageObjectsDelegate.h"
#include "NakamaClientReadStorageObjects.generated.h"

class UNakamaClient;
class UNakamaClientReadStorageObjects;
class UNakamaSession;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaClientReadStorageObjects : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaClient* NakamaClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaSession* UserSession;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReadStorageObjects OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReadStorageObjects OnError;
    
    UNakamaClientReadStorageObjects();
    UFUNCTION(BlueprintCallable)
    static UNakamaClientReadStorageObjects* ReadStorageObjects(UNakamaClient* Client, UNakamaSession* Session, TArray<FNakamaReadStorageObjectId> StorageObjectsData);
    
};

