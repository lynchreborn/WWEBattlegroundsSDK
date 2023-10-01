#pragma once
#include "CoreMinimal.h"
#include "NakamaStoreObjectAck.h"
#include "NakamaStoreObjectAcks.generated.h"

USTRUCT(BlueprintType)
struct NAKAMAUNREAL_API FNakamaStoreObjectAcks {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNakamaStoreObjectAck> StorageObjects;
    
    FNakamaStoreObjectAcks();
};

