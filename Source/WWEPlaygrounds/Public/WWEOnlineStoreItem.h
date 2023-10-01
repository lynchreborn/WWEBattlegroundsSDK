#pragma once
#include "CoreMinimal.h"
#include "WWEOnlineStoreItem.generated.h"

USTRUCT(BlueprintType)
struct FWWEOnlineStoreItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> GameStoreItemIds;
    
    WWEPLAYGROUNDS_API FWWEOnlineStoreItem();
};

