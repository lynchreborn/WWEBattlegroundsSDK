#pragma once
#include "CoreMinimal.h"
#include "NakamaReadStorageObjectId.generated.h"

USTRUCT(BlueprintType)
struct NAKAMAUNREAL_API FNakamaReadStorageObjectId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Collection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserID;
    
    FNakamaReadStorageObjectId();
};

