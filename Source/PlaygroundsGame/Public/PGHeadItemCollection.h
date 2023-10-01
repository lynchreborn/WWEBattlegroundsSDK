#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PGHeadItemEntry.h"
#include "PGHeadItemCollection.generated.h"

UCLASS(Blueprintable)
class PLAYGROUNDSGAME_API UPGHeadItemCollection : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSortItemsBeforeSaving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPGHeadItemEntry> HeadItems;
    
    UPGHeadItemCollection();
};

