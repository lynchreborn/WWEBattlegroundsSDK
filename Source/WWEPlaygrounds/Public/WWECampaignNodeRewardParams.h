#pragma once
#include "CoreMinimal.h"
#include "WWECampaignNodeParameters.h"
#include "WWECampaignNodeRewardParams.generated.h"

UCLASS(Blueprintable)
class WWEPLAYGROUNDS_API UWWECampaignNodeRewardParams : public UWWECampaignNodeParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RewardID;
    
    UWWECampaignNodeRewardParams();
};

