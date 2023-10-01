#pragma once
#include "CoreMinimal.h"
#include "NakamaDeleteStorageObjectId.generated.h"

USTRUCT(BlueprintType)
struct NAKAMAUNREAL_API FNakamaDeleteStorageObjectId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Collection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Version;
    
    FNakamaDeleteStorageObjectId();
};

