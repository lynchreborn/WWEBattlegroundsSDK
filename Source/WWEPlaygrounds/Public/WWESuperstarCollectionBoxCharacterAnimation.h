#pragma once
#include "CoreMinimal.h"
#include "WWESuperstarCollectionBoxCharacterAnimation.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FWWESuperstarCollectionBoxCharacterAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequenceBase> CharacterAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequenceBase> BoxAnimation;
    
    WWEPLAYGROUNDS_API FWWESuperstarCollectionBoxCharacterAnimation();
};

