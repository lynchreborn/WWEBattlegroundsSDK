#pragma once
#include "CoreMinimal.h"
#include "WWEAnimationItemEntry.generated.h"

class UWWEAnimationItemParameters;

USTRUCT(BlueprintType)
struct WWEPLAYGROUNDS_API FWWEAnimationItemEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UWWEAnimationItemParameters> ItemParamsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CachedItemID;
    
    FWWEAnimationItemEntry();
};

