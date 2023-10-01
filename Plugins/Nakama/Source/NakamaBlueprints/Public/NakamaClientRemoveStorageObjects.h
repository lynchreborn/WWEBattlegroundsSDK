#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "NakamaDeleteStorageObjectId.h"
#include "OnAnyErrorDelegate.h"
#include "OnSuccessfulDelegate.h"
#include "NakamaClientRemoveStorageObjects.generated.h"

class UNakamaClient;
class UNakamaClientRemoveStorageObjects;
class UNakamaSession;

UCLASS(Blueprintable)
class NAKAMABLUEPRINTS_API UNakamaClientRemoveStorageObjects : public UBlueprintAsyncActionBase {
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
    
    UNakamaClientRemoveStorageObjects();
    UFUNCTION(BlueprintCallable)
    static UNakamaClientRemoveStorageObjects* RemoveStorageObjects(UNakamaClient* Client, UNakamaSession* Session, TArray<FNakamaDeleteStorageObjectId> StorageObjectsData);
    
};

