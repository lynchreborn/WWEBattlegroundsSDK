#pragma once
#include "CoreMinimal.h"
#include "NakamaStoreObjectData.h"
#include "NakamaStorageObjectList.generated.h"

USTRUCT(BlueprintType)
struct NAKAMAUNREAL_API FNakamaStorageObjectList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNakamaStoreObjectData> Objects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Cursor;
    
    FNakamaStorageObjectList();
};

