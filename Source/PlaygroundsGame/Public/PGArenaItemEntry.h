#pragma once
#include "CoreMinimal.h"
#include "PGArenaItemEntry.generated.h"

class UPGArenaItemParameters;

USTRUCT(BlueprintType)
struct PLAYGROUNDSGAME_API FPGArenaItemEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPGArenaItemParameters> ArenaItemParamsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CachedArenaItemID;
    
    FPGArenaItemEntry();
};

