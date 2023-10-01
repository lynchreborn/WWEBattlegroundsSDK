#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "NakamaStoreObjectWrite.h"
#include "OnWriteStorageObjectsDelegate.h"
#include "NakamaClientWriteStorageObjects.generated.h"

class UNakamaClient;
class UNakamaClientWriteStorageObjects;
class UNakamaSession;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaClientWriteStorageObjects : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaClient* NakamaClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNakamaSession* UserSession;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWriteStorageObjects OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWriteStorageObjects OnError;
    
    UNakamaClientWriteStorageObjects();
    UFUNCTION(BlueprintCallable)
    static UNakamaClientWriteStorageObjects* WriteStorageObjects(UNakamaClient* Client, UNakamaSession* Session, TArray<FNakamaStoreObjectWrite> StorageObjectsData);
    
};

