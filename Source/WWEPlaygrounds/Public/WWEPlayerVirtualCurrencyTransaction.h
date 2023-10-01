#pragma once
#include "CoreMinimal.h"
#include "WWEPlayerVirtualCurrencyTransaction.generated.h"

USTRUCT(BlueprintType)
struct WWEPLAYGROUNDS_API FWWEPlayerVirtualCurrencyTransaction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 ExpirationDate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 PurchaseDate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialQuantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AvailableQuantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Expired;
    
    FWWEPlayerVirtualCurrencyTransaction();
};

