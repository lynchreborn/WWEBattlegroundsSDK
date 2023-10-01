#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PGShopCategoryFiltersData.h"
#include "PGOnlineGameShop.generated.h"

class UPGGameInstance;

UCLASS(Blueprintable)
class PLAYGROUNDSGAME_API UPGOnlineGameShop : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPGGameInstance* PGGameInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPGShopCategoryFiltersData> CategoryFiltersCached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPGShopCategoryFiltersData CurrentCategoryFilters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCheckingPurchase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bShopUpdated;
    
public:
    UPGOnlineGameShop();
};

