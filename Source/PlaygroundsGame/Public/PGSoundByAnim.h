#pragma once
#include "CoreMinimal.h"
#include "EPGSoundType.h"
#include "PGSoundByAnim.generated.h"

class USoundCue;

USTRUCT(BlueprintType)
struct FPGSoundByAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* SoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPGSoundType AnimType;
    
    PLAYGROUNDSGAME_API FPGSoundByAnim();
};

