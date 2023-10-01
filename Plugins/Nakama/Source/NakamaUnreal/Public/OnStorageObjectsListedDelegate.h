#pragma once
#include "CoreMinimal.h"
#include "NakamaStorageObjectList.h"
#include "OnStorageObjectsListedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStorageObjectsListed, const FNakamaStorageObjectList&, StorageObjects);

