#pragma once
#include "CoreMinimal.h"
#include "ENakamaStoragePermissionRead.h"
#include "ENakamaStoragePermissionWrite.h"
#include "NakamaStoreObjectWrite.generated.h"

USTRUCT(BlueprintType)
struct NAKAMAUNREAL_API FNakamaStoreObjectWrite {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Collection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENakamaStoragePermissionRead PermissionRead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENakamaStoragePermissionWrite PermissionWrite;
    
    FNakamaStoreObjectWrite();
};

