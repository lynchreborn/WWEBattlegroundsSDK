#pragma once
#include "CoreMinimal.h"
#include "PGBackendStoreItemData.h"
#include "PGBackendStoreItem.generated.h"

USTRUCT(BlueprintType)
struct FPGBackendStoreItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPGBackendStoreItemData Data;
    
    PLAYGROUNDSGAME_API FPGBackendStoreItem();
};

