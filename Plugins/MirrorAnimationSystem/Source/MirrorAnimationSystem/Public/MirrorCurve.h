#pragma once
#include "CoreMinimal.h"
#include "MirrorCurve.generated.h"

USTRUCT(BlueprintType)
struct MIRRORANIMATIONSYSTEM_API FMirrorCurve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurveName1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurveName2;
    
    FMirrorCurve();
};

