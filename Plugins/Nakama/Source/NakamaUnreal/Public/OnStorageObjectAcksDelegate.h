#pragma once
#include "CoreMinimal.h"
#include "NakamaStoreObjectAcks.h"
#include "OnStorageObjectAcksDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStorageObjectAcks, const FNakamaStoreObjectAcks&, StorageObjectsAcks);

