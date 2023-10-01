#pragma once
#include "CoreMinimal.h"
#include "WWECharacterParameterFilter.h"
#include "WWECharacterParameterNamedFilter.generated.h"

USTRUCT(BlueprintType)
struct FWWECharacterParameterNamedFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWWECharacterParameterFilter Filter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FilterName;
    
    WWEPLAYGROUNDS_API FWWECharacterParameterNamedFilter();
};

