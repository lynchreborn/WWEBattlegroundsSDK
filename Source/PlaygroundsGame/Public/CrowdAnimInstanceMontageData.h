#pragma once
#include "CoreMinimal.h"
#include "CrowdAnimInstanceMontageData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FCrowdAnimInstanceMontageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SectionCount;
    
    PLAYGROUNDSGAME_API FCrowdAnimInstanceMontageData();
};

