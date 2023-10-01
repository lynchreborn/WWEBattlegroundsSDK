#pragma once
#include "CoreMinimal.h"
#include "EWWECustomImageDigitsType.h"
#include "WWECustomImageDigits.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FWWECustomImageDigits {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWWECustomImageDigitsType DigitsType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> Digits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> BgDigits;
    
    WWEPLAYGROUNDS_API FWWECustomImageDigits();
};

