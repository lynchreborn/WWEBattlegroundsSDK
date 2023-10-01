#pragma once
#include "CoreMinimal.h"
#include "PGShopCategoryFiltersData.generated.h"

USTRUCT(BlueprintType)
struct FPGShopCategoryFiltersData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> CategoryFilters;
    
    PLAYGROUNDSGAME_API FPGShopCategoryFiltersData();
};

