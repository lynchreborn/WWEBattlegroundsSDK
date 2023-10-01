#pragma once
#include "CoreMinimal.h"
#include "EWWEArenaItemHeight.h"
#include "EWWEArenaItemSubSection.h"
#include "EWWEArenaSectionType.h"
#include "WWEArenaOutfitEntry.generated.h"

class UPGArenaItemParameters;

USTRUCT(BlueprintType)
struct WWEPLAYGROUNDS_API FWWEArenaOutfitEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPGArenaItemParameters> ArenaItemParamsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CachedArenaItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEArenaSectionType ArenaSectionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEArenaItemHeight ArenaItemHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEArenaItemSubSection ArenaItemSubsection;
    
    FWWEArenaOutfitEntry();
};

