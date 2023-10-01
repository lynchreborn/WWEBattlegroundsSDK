#pragma once
#include "CoreMinimal.h"
#include "SBGridIntPoint.generated.h"

USTRUCT(BlueprintType)
struct FSBGridIntPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Y;
    
    SABERGAME_API FSBGridIntPoint();
};

