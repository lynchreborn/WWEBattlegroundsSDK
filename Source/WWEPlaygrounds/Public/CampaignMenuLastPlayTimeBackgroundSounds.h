#pragma once
#include "CoreMinimal.h"
#include "CampaignMenuLastPlayTimeBackgroundSounds.generated.h"

USTRUCT(BlueprintType)
struct FCampaignMenuLastPlayTimeBackgroundSounds {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Times;
    
    WWEPLAYGROUNDS_API FCampaignMenuLastPlayTimeBackgroundSounds();
};

