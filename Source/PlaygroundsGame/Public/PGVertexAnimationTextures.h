#pragma once
#include "CoreMinimal.h"
#include "PGVertexAnimationTextures.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FPGVertexAnimationTextures {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture> Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture> Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MorphTargets;
    
    PLAYGROUNDSGAME_API FPGVertexAnimationTextures();
};

