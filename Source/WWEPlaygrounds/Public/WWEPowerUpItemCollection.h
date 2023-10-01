#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WWEPowerUpItemEntry.h"
#include "WWEPowerUpItemCollection.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWEPowerUpItemCollection : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSortItemsBeforeSaving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEPowerUpItemEntry> PowerUpItems;
    
    UWWEPowerUpItemCollection();
};

