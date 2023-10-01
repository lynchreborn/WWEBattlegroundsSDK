#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify_PlaySound.h"
#include "WWEAnimNotify_PlayPowerUpSound.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class WWEPLAYGROUNDS_API UWWEAnimNotify_PlayPowerUpSound : public UAnimNotify_PlaySound {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PowerUpSoundName;
    
public:
    UWWEAnimNotify_PlayPowerUpSound();
};

