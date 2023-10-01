#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WWEAnimationItemEntry.h"
#include "WWEAnimationItemCollection.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEAnimationItemCollection : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSortItemsBeforeSaving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEAnimationItemEntry> Items;
    
    UWWEAnimationItemCollection();
};

