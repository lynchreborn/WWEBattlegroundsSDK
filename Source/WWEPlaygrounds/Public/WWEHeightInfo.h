#pragma once
#include "CoreMinimal.h"
#include "WWEHeightInfo.generated.h"

USTRUCT(BlueprintType)
struct FWWEHeightInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultHeight;
    
    WWEPLAYGROUNDS_API FWWEHeightInfo();
};

