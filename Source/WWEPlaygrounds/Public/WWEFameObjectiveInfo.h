#pragma once
#include "CoreMinimal.h"
#include "WWEFameObjectiveInfo.generated.h"

USTRUCT(BlueprintType)
struct FWWEFameObjectiveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHardCurrency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrencyAmount;
    
    WWEPLAYGROUNDS_API FWWEFameObjectiveInfo();
};

