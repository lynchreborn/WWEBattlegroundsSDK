#pragma once
#include "CoreMinimal.h"
#include "NakamaError.h"
#include "NakamaStoreObjectAcks.h"
#include "OnWriteStorageObjectsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnWriteStorageObjects, FNakamaError, Error, FNakamaStoreObjectAcks, StorageObjectsAcks);

