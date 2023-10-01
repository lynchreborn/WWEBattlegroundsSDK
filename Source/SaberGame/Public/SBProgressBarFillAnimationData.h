#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBProgressBarFillAnimationData.generated.h"

USTRUCT(BlueprintType)
struct FSBProgressBarFillAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float InitialPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float DesiredPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    FDateTime StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    float DesiredDuration;
    
    SABERGAME_API FSBProgressBarFillAnimationData();
};

