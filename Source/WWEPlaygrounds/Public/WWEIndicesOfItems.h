#pragma once
#include "CoreMinimal.h"
#include "WWEIndicesOfItems.generated.h"

USTRUCT(BlueprintType)
struct FWWEIndicesOfItems {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> VIPItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> LegendaryItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> EpicItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> CommonItems;
    
    WWEPLAYGROUNDS_API FWWEIndicesOfItems();
};

