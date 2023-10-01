#pragma once
#include "CoreMinimal.h"
#include "PGBackendStoreItemData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPGBackendStoreItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    PLAYGROUNDSGAME_API FPGBackendStoreItemData();
};

