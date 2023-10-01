#pragma once
#include "CoreMinimal.h"
#include "NakamaError.h"
#include "NakamaStoreObjectData.h"
#include "OnReadStorageObjectsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnReadStorageObjects, FNakamaError, Error, TArray<FNakamaStoreObjectData>, StorageObjects);

