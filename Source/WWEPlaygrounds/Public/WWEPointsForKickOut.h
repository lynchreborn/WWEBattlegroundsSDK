#pragma once
#include "CoreMinimal.h"
#include "WWEPointsForKickOut.generated.h"

USTRUCT(BlueprintType)
struct FWWEPointsForKickOut {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinKickOuts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxKickOuts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Points;
    
    WWEPLAYGROUNDS_API FWWEPointsForKickOut();
};

