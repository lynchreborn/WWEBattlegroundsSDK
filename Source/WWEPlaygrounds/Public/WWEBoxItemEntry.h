#pragma once
#include "CoreMinimal.h"
#include "WWEBoxItemEntry.generated.h"

class UWWEBoxItemParameters;

USTRUCT(BlueprintType)
struct WWEPLAYGROUNDS_API FWWEBoxItemEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UWWEBoxItemParameters> BoxItemParamsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CachedBoxItemID;
    
    FWWEBoxItemEntry();
};

