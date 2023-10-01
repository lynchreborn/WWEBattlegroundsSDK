#pragma once
#include "CoreMinimal.h"
#include "EWWEDirection.h"
#include "WWERingVertexAnimationParameters.h"
#include "WWERingSkirtVertexAnimation.generated.h"

USTRUCT(BlueprintType)
struct FWWERingSkirtVertexAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWWEDirection, FWWERingVertexAnimationParameters> VertexAnimationParameters;
    
    WWEPLAYGROUNDS_API FWWERingSkirtVertexAnimation();
};

