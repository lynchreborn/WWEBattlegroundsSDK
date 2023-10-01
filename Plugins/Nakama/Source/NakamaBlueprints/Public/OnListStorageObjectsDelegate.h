#pragma once
#include "CoreMinimal.h"
#include "NakamaError.h"
#include "NakamaStorageObjectList.h"
#include "OnListStorageObjectsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnListStorageObjects, FNakamaError, Error, FNakamaStorageObjectList, StorageObjectList);

