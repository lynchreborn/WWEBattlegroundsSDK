#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WWEOriginalFresnel.generated.h"

USTRUCT(BlueprintType)
struct FWWEOriginalFresnel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor ColorEmissiveFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor FresnelFresnelReversePosTopNegBottomPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor TillingIntensitySpeedXSpeedY;
    
    WWEPLAYGROUNDS_API FWWEOriginalFresnel();
};

