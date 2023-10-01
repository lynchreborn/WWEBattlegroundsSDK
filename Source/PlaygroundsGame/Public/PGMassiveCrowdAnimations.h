#pragma once
#include "CoreMinimal.h"
#include "PGVertexAnimationTextures.h"
#include "PGMassiveCrowdAnimations.generated.h"

USTRUCT(BlueprintType)
struct FPGMassiveCrowdAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPGVertexAnimationTextures> Entries;
    
    PLAYGROUNDSGAME_API FPGMassiveCrowdAnimations();
};

