#pragma once
#include "CoreMinimal.h"
#include "CampaignMenuBackgroundSounds.generated.h"

class USoundCue;

USTRUCT(BlueprintType)
struct FCampaignMenuBackgroundSounds {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundCue*> Sounds;
    
    WWEPLAYGROUNDS_API FCampaignMenuBackgroundSounds();
};

