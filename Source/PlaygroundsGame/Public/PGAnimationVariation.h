#pragma once
#include "CoreMinimal.h"
#include "PGAnimationVariation.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct PLAYGROUNDSGAME_API FPGAnimationVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequenceBase> Montage;
    
    FPGAnimationVariation();
};

