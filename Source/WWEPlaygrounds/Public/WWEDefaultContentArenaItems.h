#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PGArenaItemEntry.h"
#include "EWWEArenaSectionType.h"
#include "Templates/SubclassOf.h"
#include "WWEUnlockedArenaItem.h"
#include "WWEDefaultContentArenaItems.generated.h"

class UPGArenaItemCollection;
class UWWEArenaItemParameters;

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEDefaultContentArenaItems : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, meta=(AllowPrivateAccess=true))
    TArray<FPGArenaItemEntry> ArenaItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPGArenaItemCollection> InitialArenaItemsCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPGArenaItemCollection> CompleteArenaItemsCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UWWEArenaItemParameters*> InitialArenaItemParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UWWEArenaItemParameters*> ArenaItemParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TMap<EWWEArenaSectionType, UWWEArenaItemParameters*> DefaultArenaItemParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    TArray<FWWEUnlockedArenaItem> InitialUnlockedArenaItems;
    
public:
    UWWEDefaultContentArenaItems();
};

