#pragma once
#include "CoreMinimal.h"
#include "WWEDefaultCustomEntrances.generated.h"

class UAnimSequenceBase;
class ULevelSequence;
class USoundCue;

USTRUCT(BlueprintType)
struct FWWEDefaultCustomEntrances {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> EntranceLevelSequence[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimSequenceBase> FacialAnimationEntranceLevelSequence[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> EntranceMusic[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> EntranceComment[2];
    
    WWEPLAYGROUNDS_API FWWEDefaultCustomEntrances();
};

