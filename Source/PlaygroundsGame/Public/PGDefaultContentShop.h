#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PGBackendStoreItemData.h"
#include "PGDefaultContentShop.generated.h"

UCLASS(Blueprintable)
class PLAYGROUNDSGAME_API UPGDefaultContentShop : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPGBackendStoreItemData> StoreItemsData;
    
    UPGDefaultContentShop();
};

