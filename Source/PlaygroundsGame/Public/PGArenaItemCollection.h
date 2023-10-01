#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PGArenaItemEntry.h"
#include "PGArenaItemCollection.generated.h"

UCLASS(Blueprintable)
class PLAYGROUNDSGAME_API UPGArenaItemCollection : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSortItemsBeforeSaving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPGArenaItemEntry> ArenaItems;
    
    UPGArenaItemCollection();
};

