#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PGSkinItemEntry.h"
#include "PGSkinItemCollection.generated.h"

UCLASS(Blueprintable)
class PLAYGROUNDSGAME_API UPGSkinItemCollection : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSortItemsBeforeSaving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPGSkinItemEntry> SkinItems;
    
    UPGSkinItemCollection();
};

