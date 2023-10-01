#pragma once
#include "CoreMinimal.h"
#include "EWWEMatchMenuOptions.h"
#include "WWEConfigOptionData.h"
#include "WWEConfigSubOptions.generated.h"

USTRUCT(BlueprintType)
struct FWWEConfigSubOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OptionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWEMatchMenuOptions OptionKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWWEConfigOptionData> SubOptionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultOptionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedTrim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> LiteralsToTrim;
    
    WWEPLAYGROUNDS_API FWWEConfigSubOptions();
};

