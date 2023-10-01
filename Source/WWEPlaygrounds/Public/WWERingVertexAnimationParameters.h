#pragma once
#include "CoreMinimal.h"
#include "WWERingVertexAnimationParameters.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FWWERingVertexAnimationParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MorphTargets;
    
    WWEPLAYGROUNDS_API FWWERingVertexAnimationParameters();
};

