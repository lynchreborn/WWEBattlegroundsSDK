#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WWEBoxItemEntry.h"
#include "WWEBoxItemCollection.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEBoxItemCollection : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSortItemsBeforeSaving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEBoxItemEntry> Items;
    
    UWWEBoxItemCollection();
};

