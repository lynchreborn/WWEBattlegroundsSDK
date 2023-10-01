#pragma once
#include "CoreMinimal.h"
#include "PGVanityItemEntry.generated.h"

class UPGVanityItemParameters;

USTRUCT(BlueprintType)
struct PLAYGROUNDSGAME_API FPGVanityItemEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPGVanityItemParameters> VanityItemParamsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CachedVanityItemID;
    
    FPGVanityItemEntry();
};

