#pragma once
#include "CoreMinimal.h"
#include "PGSkinItemEntry.generated.h"

class UPGSkinItemParameters;

USTRUCT(BlueprintType)
struct PLAYGROUNDSGAME_API FPGSkinItemEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPGSkinItemParameters> SkinItemParamsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CachedSkinItemID;
    
    FPGSkinItemEntry();
};

