#pragma once
#include "CoreMinimal.h"
#include "NakamaStoreObjectData.h"
#include "OnStorageObjectsReadDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStorageObjectsRead, const TArray<FNakamaStoreObjectData>&, StorageObjects);

