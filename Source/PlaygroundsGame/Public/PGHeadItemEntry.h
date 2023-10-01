#pragma once
#include "CoreMinimal.h"
#include "PGHeadItemEntry.generated.h"

class UPGHeadItemParameters;

USTRUCT(BlueprintType)
struct PLAYGROUNDSGAME_API FPGHeadItemEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPGHeadItemParameters> HeadItemParamsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CachedHeadItemID;
    
    FPGHeadItemEntry();
};

